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

#ifndef ALIBABACLOUD_LINKFACE_MODEL_QUERYSYNCPICSCHEDULEREQUEST_H_
#define ALIBABACLOUD_LINKFACE_MODEL_QUERYSYNCPICSCHEDULEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/linkface/LinkFaceExport.h>

namespace AlibabaCloud
{
	namespace LinkFace
	{
		namespace Model
		{
			class ALIBABACLOUD_LINKFACE_EXPORT QuerySyncPicScheduleRequest : public RpcServiceRequest
			{

			public:
				QuerySyncPicScheduleRequest();
				~QuerySyncPicScheduleRequest();

				std::string getIotId()const;
				void setIotId(const std::string& iotId);
				std::string getGroupId()const;
				void setGroupId(const std::string& groupId);
				std::string getProductKey()const;
				void setProductKey(const std::string& productKey);
				std::string getApiProduct()const;
				void setApiProduct(const std::string& apiProduct);
				std::string getApiRevision()const;
				void setApiRevision(const std::string& apiRevision);
				std::string getDeviceName()const;
				void setDeviceName(const std::string& deviceName);

            private:
				std::string iotId_;
				std::string groupId_;
				std::string productKey_;
				std::string apiProduct_;
				std::string apiRevision_;
				std::string deviceName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LINKFACE_MODEL_QUERYSYNCPICSCHEDULEREQUEST_H_