#include <gazebo/gazebo.hh>

namespace gazebo
{
	class WelcomeWorldPluginMyRobot : public WorldPlugin
	{
		public: WelcomeWorldPluginMyRobot() : WorldPlugin()
		{
			printf("Welcome to Syed's world!\n");
		}
		public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
		{}
	};
	GZ_REGISTER_WORLD_PLUGIN(WelcomeWorldPluginMyRobot)
}
