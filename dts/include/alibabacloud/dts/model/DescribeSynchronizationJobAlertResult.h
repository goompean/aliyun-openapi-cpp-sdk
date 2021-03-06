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

#ifndef ALIBABACLOUD_DTS_MODEL_DESCRIBESYNCHRONIZATIONJOBALERTRESULT_H_
#define ALIBABACLOUD_DTS_MODEL_DESCRIBESYNCHRONIZATIONJOBALERTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dts/DtsExport.h>

namespace AlibabaCloud
{
	namespace Dts
	{
		namespace Model
		{
			class ALIBABACLOUD_DTS_EXPORT DescribeSynchronizationJobAlertResult : public ServiceResult
			{
			public:


				DescribeSynchronizationJobAlertResult();
				explicit DescribeSynchronizationJobAlertResult(const std::string &payload);
				~DescribeSynchronizationJobAlertResult();
				std::string getErrorAlertPhone()const;
				std::string getSynchronizationJobId()const;
				std::string getSynchronizationJobName()const;
				std::string getDelayAlertPhone()const;
				std::string getErrorAlertStatus()const;
				std::string getErrMessage()const;
				std::string getDelayAlertStatus()const;
				std::string getDelayOverSeconds()const;
				std::string getSuccess()const;
				std::string getSynchronizationDirection()const;
				std::string getErrCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string errorAlertPhone_;
				std::string synchronizationJobId_;
				std::string synchronizationJobName_;
				std::string delayAlertPhone_;
				std::string errorAlertStatus_;
				std::string errMessage_;
				std::string delayAlertStatus_;
				std::string delayOverSeconds_;
				std::string success_;
				std::string synchronizationDirection_;
				std::string errCode_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DTS_MODEL_DESCRIBESYNCHRONIZATIONJOBALERTRESULT_H_