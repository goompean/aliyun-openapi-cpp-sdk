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

#ifndef ALIBABACLOUD_ARMS_MODEL_SENDCUSTOMINCIDENTSREQUEST_H_
#define ALIBABACLOUD_ARMS_MODEL_SENDCUSTOMINCIDENTSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/arms/ARMSExport.h>

namespace AlibabaCloud
{
	namespace ARMS
	{
		namespace Model
		{
			class ALIBABACLOUD_ARMS_EXPORT SendCustomIncidentsRequest : public RpcServiceRequest
			{

			public:
				SendCustomIncidentsRequest();
				~SendCustomIncidentsRequest();

				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getIncidents()const;
				void setIncidents(const std::string& incidents);
				std::string getProxyUserId()const;
				void setProxyUserId(const std::string& proxyUserId);
				std::string getProductType()const;
				void setProductType(const std::string& productType);

            private:
				std::string regionId_;
				std::string incidents_;
				std::string proxyUserId_;
				std::string productType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ARMS_MODEL_SENDCUSTOMINCIDENTSREQUEST_H_