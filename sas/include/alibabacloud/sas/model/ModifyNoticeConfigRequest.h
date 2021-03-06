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

#ifndef ALIBABACLOUD_SAS_MODEL_MODIFYNOTICECONFIGREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_MODIFYNOTICECONFIGREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/sas/SasExport.h>

namespace AlibabaCloud
{
	namespace Sas
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_EXPORT ModifyNoticeConfigRequest : public RpcServiceRequest
			{

			public:
				ModifyNoticeConfigRequest();
				~ModifyNoticeConfigRequest();

				std::string getProject()const;
				void setProject(const std::string& project);
				int getTimeLimit()const;
				void setTimeLimit(int timeLimit);
				int getRoute()const;
				void setRoute(int route);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);

            private:
				std::string project_;
				int timeLimit_;
				int route_;
				std::string sourceIp_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_MODIFYNOTICECONFIGREQUEST_H_