using UnityEngine;
using Unity.Netcode;

public class PlayerControl : NetworkBehaviour
{
    [SerializeField]
    private float walkSpeed = 0.05f;

    [SerializeField]
    private Vector2 defaultPositionRange = new Vector2(-4, 4);

    [SerializeField]
    private NetworkVariable<float> forwardBackPosition = new NetworkVariable<float>();

    [SerializeField]
    private NetworkVariable<float> leftRightPosition = new NetworkVariable<float>();

    // client caching
    private float oldForwardBackPosition;
    private float oldLeftRightPosition;

    public FixedJoystick leftjoystick;
    public FixedJoystick rightjoystick;

    Vector3 moveVelocity;
    Vector3 aimVelocity;
    //public float moveSpeed = 0f;

    public Rigidbody rb;
    public GameObject bullet;
    public Transform shootingPoint;
    public float fireSpeed;

    private void Start()
    {
        transform.position = new Vector3(Random.Range(defaultPositionRange.x, defaultPositionRange.y), 0,
                   Random.Range(defaultPositionRange.x, defaultPositionRange.y));

        rb = GetComponent<Rigidbody>();
    }

    private void Update()
    {
        if (IsServer)
        {
            UpdateServer();
        }
        if (IsClient && IsOwner)
        {
            UpdateClient();
        }
    }


    private void UpdateServer()
    {
        transform.position = new Vector3(transform.position.x + leftRightPosition.Value,
            transform.position.y, transform.position.z + forwardBackPosition.Value);
    }

    private void UpdateClient()
    {
        float forwardBackward = 0;
        float leftRight = 0;

        if (leftjoystick.Vertical > 0)
        {
            forwardBackward += walkSpeed;
        }
        if (leftjoystick.Vertical < 0)
        {
            forwardBackward -= walkSpeed;
        }
        if (leftjoystick.Horizontal > 0)
        {
            leftRight += walkSpeed;
        }
        if (leftjoystick.Horizontal < 0)
        {
            leftRight -= walkSpeed;
        }

        // Aim
        aimVelocity = new Vector3(rightjoystick.Horizontal, 0f, rightjoystick.Vertical);
        Vector3 AimInput = new Vector3(aimVelocity.x, 0f, aimVelocity.z);
        Vector3 lookAtPoint = transform.position + AimInput;
        transform.LookAt(lookAtPoint);

        if (oldForwardBackPosition != forwardBackward || oldLeftRightPosition != leftRight)
        {
            oldForwardBackPosition = forwardBackward;
            oldLeftRightPosition = leftRight;

            //update the server
           UpdateClientPositionServerRpc(forwardBackward, leftRight);
        }

        if (rightjoystick.Horizontal != 0 || rightjoystick.Vertical != 0)
        {
            Shoot();
        }

    }

    void Shoot()
    {
        var bulletshoot = Instantiate(bullet, shootingPoint.position, shootingPoint.rotation);
        bulletshoot.GetComponent<Rigidbody>().velocity = shootingPoint.forward * fireSpeed;
    }

    [ServerRpc]
    public void UpdateClientPositionServerRpc(float forwardBacward, float leftRight)
    {
        forwardBackPosition.Value = forwardBacward;
        leftRightPosition.Value = leftRight;
    }
}
