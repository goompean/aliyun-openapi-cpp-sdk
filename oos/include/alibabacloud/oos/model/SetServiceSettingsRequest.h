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

#ifndef ALIBABACLOUD_OOS_MODEL_SETSERVICESETTINGSREQUEST_H_
#define ALIBABACLOUD_OOS_MODEL_SETSERVICESETTINGSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/oos/OosExport.h>

namespace AlibabaCloud
{
	namespace Oos
	{
		namespace Model
		{
			class ALIBABACLOUD_OOS_EXPORT SetServiceSettingsRequest : public RpcServiceRequest
			{

			public:
				SetServiceSettingsRequest();
				~SetServiceSettingsRequest();

				bool getDeliverySlsEnabled()const;
				void setDeliverySlsEnabled(bool deliverySlsEnabled);
				std::string getDeliveryOssKeyPrefix()const;
				void setDeliveryOssKeyPrefix(const std::string& deliveryOssKeyPrefix);
				bool getDeliveryOssEnabled()const;
				void setDeliveryOssEnabled(bool deliveryOssEnabled);
				std::string getDeliverySlsProjectName()const;
				void setDeliverySlsProjectName(const std::string& deliverySlsProjectName);
				std::string getDeliveryOssBucketName()const;
				void setDeliveryOssBucketName(const std::string& deliveryOssBucketName);

            private:
				bool deliverySlsEnabled_;
				std::string deliveryOssKeyPrefix_;
				bool deliveryOssEnabled_;
				std::string deliverySlsProjectName_;
				std::string deliveryOssBucketName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OOS_MODEL_SETSERVICESETTINGSREQUEST_H_