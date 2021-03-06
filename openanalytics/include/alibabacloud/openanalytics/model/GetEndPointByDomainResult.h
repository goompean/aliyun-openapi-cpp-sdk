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

#ifndef ALIBABACLOUD_OPENANALYTICS_MODEL_GETENDPOINTBYDOMAINRESULT_H_
#define ALIBABACLOUD_OPENANALYTICS_MODEL_GETENDPOINTBYDOMAINRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/openanalytics/OpenanalyticsExport.h>

namespace AlibabaCloud
{
	namespace Openanalytics
	{
		namespace Model
		{
			class ALIBABACLOUD_OPENANALYTICS_EXPORT GetEndPointByDomainResult : public ServiceResult
			{
			public:
				struct EndPointInfo
				{
					std::string endPointID;
					std::string vSwitch;
					std::string domainURL;
					std::string vpcID;
					std::string networkType;
					std::string zone;
					std::string allowIP;
					std::string port;
					std::string host;
					std::string cloudInstanceID;
				};


				GetEndPointByDomainResult();
				explicit GetEndPointByDomainResult(const std::string &payload);
				~GetEndPointByDomainResult();
				EndPointInfo getEndPointInfo()const;
				std::string getRegionId()const;

			protected:
				void parse(const std::string &payload);
			private:
				EndPointInfo endPointInfo_;
				std::string regionId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OPENANALYTICS_MODEL_GETENDPOINTBYDOMAINRESULT_H_