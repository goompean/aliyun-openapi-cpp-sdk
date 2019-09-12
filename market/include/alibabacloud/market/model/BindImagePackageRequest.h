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

#ifndef ALIBABACLOUD_MARKET_MODEL_BINDIMAGEPACKAGEREQUEST_H_
#define ALIBABACLOUD_MARKET_MODEL_BINDIMAGEPACKAGEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/market/MarketExport.h>

namespace AlibabaCloud
{
	namespace Market
	{
		namespace Model
		{
			class ALIBABACLOUD_MARKET_EXPORT BindImagePackageRequest : public RpcServiceRequest
			{

			public:
				BindImagePackageRequest();
				~BindImagePackageRequest();

				std::string getEcsInstanceId()const;
				void setEcsInstanceId(const std::string& ecsInstanceId);
				std::string getImagePackageInstanceId()const;
				void setImagePackageInstanceId(const std::string& imagePackageInstanceId);

            private:
				std::string ecsInstanceId_;
				std::string imagePackageInstanceId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_MARKET_MODEL_BINDIMAGEPACKAGEREQUEST_H_