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

#ifndef ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETQUALITYRULERESULT_H_
#define ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETQUALITYRULERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dataworks-public/Dataworks_publicExport.h>

namespace AlibabaCloud
{
	namespace Dataworks_public
	{
		namespace Model
		{
			class ALIBABACLOUD_DATAWORKS_PUBLIC_EXPORT GetQualityRuleResult : public ServiceResult
			{
			public:
				struct Data
				{
					std::string comment;
					int checker;
					std::string criticalThreshold;
					std::string checkerName;
					std::string expectValue;
					std::string warningThreshold;
					std::string onDuty;
					std::string trend;
					std::string whereCondition;
					int ruleType;
					std::string _operator;
					long entityId;
					int methodId;
					bool fixCheck;
					int blockType;
					std::string templateName;
					int predictType;
					long id;
					std::string methodName;
					std::string property;
					int templateId;
					std::string ruleName;
				};


				GetQualityRuleResult();
				explicit GetQualityRuleResult(const std::string &payload);
				~GetQualityRuleResult();
				int getHttpStatusCode()const;
				Data getData()const;
				std::string getErrorCode()const;
				std::string getErrorMessage()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				int httpStatusCode_;
				Data data_;
				std::string errorCode_;
				std::string errorMessage_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DATAWORKS_PUBLIC_MODEL_GETQUALITYRULERESULT_H_