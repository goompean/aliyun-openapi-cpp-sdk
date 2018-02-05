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

#ifndef ALIBABACLOUD_ESS_MODEL_DESCRIBELIMITATIONRESULT_H_
#define ALIBABACLOUD_ESS_MODEL_DESCRIBELIMITATIONRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ess/EssExport.h>

namespace AlibabaCloud
{
	namespace Ess
	{
		namespace Model
		{
			class ALIBABACLOUD_ESS_EXPORT DescribeLimitationResult : public ServiceResult
			{
			public:


				DescribeLimitationResult();
				explicit DescribeLimitationResult(const std::string &payload);
				~DescribeLimitationResult();
				int getMaxNumberOfScalingRules()const;
				int getMaxNumberOfScalingInstances()const;
				int getMaxNumberOfScheduledTasks()const;
				int getMaxNumberOfLoadBalancers()const;
				int getMaxNumberOfMinSize()const;
				int getMaxNumberOfScalingGroups()const;
				int getMaxNumberOfScalingConfigurations()const;
				int getMaxNumberOfDBInstances()const;
				int getMaxNumberOfMaxSize()const;

			protected:
				void parse(const std::string &payload);
			private:
				int maxNumberOfScalingRules_;
				int maxNumberOfScalingInstances_;
				int maxNumberOfScheduledTasks_;
				int maxNumberOfLoadBalancers_;
				int maxNumberOfMinSize_;
				int maxNumberOfScalingGroups_;
				int maxNumberOfScalingConfigurations_;
				int maxNumberOfDBInstances_;
				int maxNumberOfMaxSize_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ESS_MODEL_DESCRIBELIMITATIONRESULT_H_