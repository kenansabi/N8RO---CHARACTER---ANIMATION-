struct JointRotation
{
    float x;
    float y;
    float z;
};

struct JointAngles
{
    JointRotation leftAnkle;
    JointRotation rightAnkle;

    JointRotation leftKnee;
    JointRotation rightKnee;

    JointRotation leftHip;
    JointRotation rightHip;

    JointRotation leftShoulder;
    JointRotation rightShoulder;

    JointRotation leftElbow;
    JointRotation rightElbow;
};

void UpdateMotion(JointAngles& joints)
{
    joints.leftAnkle = { -5.0f, 0.0f,  5.0f };
    joints.rightAnkle = { 5.0f, 0.0f, -5.0f };

    joints.leftKnee = { 10.0f, 0.0f, 0.0f };
    joints.rightKnee = { 12.0f, 0.0f, 0.0f };

    joints.leftHip = { -10.0f, 0.0f,  15.0f };
    joints.rightHip = { 15.0f, 0.0f, -10.0f };

    joints.leftShoulder = { 25.0f, 0.0f, -15.0f };
    joints.rightShoulder = { 40.0f, 0.0f,  20.0f };

    joints.leftElbow = { 20.0f, 0.0f,  10.0f };
    joints.rightElbow = { -15.0f, 0.0f, -10.0f };
}