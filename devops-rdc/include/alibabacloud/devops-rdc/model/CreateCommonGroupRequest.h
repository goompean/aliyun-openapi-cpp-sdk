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

#ifndef ALIBABACLOUD_DEVOPS_RDC_MODEL_CREATECOMMONGROUPREQUEST_H_
#define ALIBABACLOUD_DEVOPS_RDC_MODEL_CREATECOMMONGROUPREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/devops-rdc/Devops_rdcExport.h>

namespace AlibabaCloud
{
	namespace Devops_rdc
	{
		namespace Model
		{
			class ALIBABACLOUD_DEVOPS_RDC_EXPORT CreateCommonGroupRequest : public RpcServiceRequest
			{

			public:
				CreateCommonGroupRequest();
				~CreateCommonGroupRequest();

				std::string getSmartGroupId()const;
				void setSmartGroupId(const std::string& smartGroupId);
				std::string getName()const;
				void setName(const std::string& name);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getProjectId()const;
				void setProjectId(const std::string& projectId);
				std::string getOrgId()const;
				void setOrgId(const std::string& orgId);

            private:
				std::string smartGroupId_;
				std::string name_;
				std::string description_;
				std::string projectId_;
				std::string orgId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DEVOPS_RDC_MODEL_CREATECOMMONGROUPREQUEST_H_