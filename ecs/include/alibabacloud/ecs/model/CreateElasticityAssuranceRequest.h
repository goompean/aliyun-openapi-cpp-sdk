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

#ifndef ALIBABACLOUD_ECS_MODEL_CREATEELASTICITYASSURANCEREQUEST_H_
#define ALIBABACLOUD_ECS_MODEL_CREATEELASTICITYASSURANCEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ecs/EcsExport.h>

namespace AlibabaCloud
{
	namespace Ecs
	{
		namespace Model
		{
			class ALIBABACLOUD_ECS_EXPORT CreateElasticityAssuranceRequest : public RpcServiceRequest
			{

			public:
				CreateElasticityAssuranceRequest();
				~CreateElasticityAssuranceRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getClientToken()const;
				void setClientToken(const std::string& clientToken);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getStartTime()const;
				void setStartTime(const std::string& startTime);
				std::string getPlatform()const;
				void setPlatform(const std::string& platform);
				std::string getPrivatePoolOptionsMatchCriteria()const;
				void setPrivatePoolOptionsMatchCriteria(const std::string& privatePoolOptionsMatchCriteria);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::vector<std::string> getInstanceType()const;
				void setInstanceType(const std::vector<std::string>& instanceType);
				std::string getInstanceChargeType()const;
				void setInstanceChargeType(const std::string& instanceChargeType);
				int getPeriod()const;
				void setPeriod(int period);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getPrivatePoolOptionsName()const;
				void setPrivatePoolOptionsName(const std::string& privatePoolOptionsName);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getAssuranceTimes()const;
				void setAssuranceTimes(const std::string& assuranceTimes);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getResourceType()const;
				void setResourceType(const std::string& resourceType);
				int getInstanceCpuCoreCount()const;
				void setInstanceCpuCoreCount(int instanceCpuCoreCount);
				std::string getPeriodUnit()const;
				void setPeriodUnit(const std::string& periodUnit);
				std::vector<std::string> getZoneId()const;
				void setZoneId(const std::vector<std::string>& zoneId);
				std::string getChargeType()const;
				void setChargeType(const std::string& chargeType);
				std::string getPackageType()const;
				void setPackageType(const std::string& packageType);
				int getInstanceAmount()const;
				void setInstanceAmount(int instanceAmount);

            private:
				long resourceOwnerId_;
				std::string clientToken_;
				std::string description_;
				std::string startTime_;
				std::string platform_;
				std::string privatePoolOptionsMatchCriteria_;
				std::string regionId_;
				std::vector<std::string> instanceType_;
				std::string instanceChargeType_;
				int period_;
				std::string resourceOwnerAccount_;
				std::string privatePoolOptionsName_;
				std::string ownerAccount_;
				std::string assuranceTimes_;
				long ownerId_;
				std::string resourceType_;
				int instanceCpuCoreCount_;
				std::string periodUnit_;
				std::vector<std::string> zoneId_;
				std::string chargeType_;
				std::string packageType_;
				int instanceAmount_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECS_MODEL_CREATEELASTICITYASSURANCEREQUEST_H_