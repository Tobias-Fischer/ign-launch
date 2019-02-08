/*
 * Copyright (C) 2019 Open Source Robotics Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */
#ifndef IGNITION_LAUNCH_JOYSTICK_COMPRESS_PLUGIN_HH_
#define IGNITION_LAUNCH_JOYSTICK_COMPRESS_PLUGIN_HH_

#include <memory>
#include <thread>
#include <ignition/plugin/Register.hh>
#include <ignition/gazebo/Server.hh>
#include "ignition/launch/Plugin.hh"

using namespace ignition::launch;

namespace ignition
{
  class GazeboServer : public ignition::launch::Plugin
  {
    public: GazeboServer();
    public: virtual ~GazeboServer() = default;
    public: virtual void Load(const tinyxml2::XMLElement *_elem) override final;
    private: std::unique_ptr<gazebo::Server> server;
  };
}

// Register the plugin
IGNITION_ADD_PLUGIN(GazeboServer, ignition::launch::Plugin)

#endif
