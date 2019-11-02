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

#ifndef ALIBABACLOUD_DYVMSAPI_MODEL_SMARTCALLOPERATEREQUEST_H_
#define ALIBABACLOUD_DYVMSAPI_MODEL_SMARTCALLOPERATEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/dyvmsapi/DyvmsapiExport.h>

namespace AlibabaCloud
{
	namespace Dyvmsapi
	{
		namespace Model
		{
			class ALIBABACLOUD_DYVMSAPI_EXPORT SmartCallOperateRequest : public RpcServiceRequest
			{

			public:
				SmartCallOperateRequest();
				~SmartCallOperateRequest();

				std::string getCallId()const;
				void setCallId(const std::string& callId);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getParam()const;
				void setParam(const std::string& param);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getCommand()const;
				void setCommand(const std::string& command);

            private:
				std::string callId_;
				long resourceOwnerId_;
				std::string accessKeyId_;
				std::string param_;
				std::string resourceOwnerAccount_;
				long ownerId_;
				std::string command_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DYVMSAPI_MODEL_SMARTCALLOPERATEREQUEST_H_