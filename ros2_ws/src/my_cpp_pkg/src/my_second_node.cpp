#include "rclcpp/rclcpp.hpp"

class MyNode: public rclcpp::Node
{
public:
    MyNode(): Node("cpp_test")
    {
        RCLCPP_INFO(this->get_logger(), "Hello CPP Node");

        timer_ = this->create_wall_timer(std::chrono::seconds(1), std::bind(&MyNode::timerCallback, this)); //1 Hz
    }
private:
    void timerCallback()
    {
        count_++;
        RCLCPP_INFO(this->get_logger(), "Hello %d", count_);
    }

    rclcpp::TimerBase::SharedPtr timer_;
    int count_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<MyNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}