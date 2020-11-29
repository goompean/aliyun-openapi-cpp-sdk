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

#ifndef ALIBABACLOUD_DTS_MODEL_DESCRIBESYNCHRONIZATIONOBJECTMODIFYSTATUSREQUEST_H_
#define ALIBABACLOUD_DTS_MODEL_DESCRIBESYNCHRONIZATIONOBJECTMODIFYSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dts/DtsExport.h>

namespace AlibabaCloud
{
	namespace Dts
	{
		namespace Model
		{
			class ALIBABACLOUD_DTS_EXPORT DescribeSynchronizationObjectModifyStatusRequest : public RpcServiceRequest
			{

			public:
				DescribeSynchronizationObjectModifyStatusRequest();
				~DescribeSynchronizationObjectModifyStatusRequest();

				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getOwnerId()const;
				void setOwnerId(const std::string& ownerId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getAccountId()const;
				void setAccountId(const std::string& accountId);
				std::string getTaskId()const;
				void setTaskId(const std::string& taskId);

            private:
				std::string clientToken_;
				std::string ownerId_;
				std::string accessKeyId_;
				std::string accountId_;
				std::string taskId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DTS_MODEL_DESCRIBESYNCHRONIZATIONOBJECTMODIFYSTATUSREQUEST_H_