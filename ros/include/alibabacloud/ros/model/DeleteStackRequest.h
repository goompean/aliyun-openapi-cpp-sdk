/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_ROS_MODEL_DELETESTACKREQUEST_H_
#define ALIBABACLOUD_ROS_MODEL_DELETESTACKREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ros/ROSExport.h>

namespace AlibabaCloud
{
	namespace ROS
	{
		namespace Model
		{
			class ALIBABACLOUD_ROS_EXPORT DeleteStackRequest : public RpcServiceRequest
			{

			public:
				DeleteStackRequest();
				~DeleteStackRequest();

				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				bool getRetainAllResources()const;
				void setRetainAllResources(bool retainAllResources);
				std::string getStackId()const;
				void setStackId(const std::string& stackId);

            private:
				std::string regionId_;
				bool retainAllResources_;
				std::string stackId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ROS_MODEL_DELETESTACKREQUEST_H_