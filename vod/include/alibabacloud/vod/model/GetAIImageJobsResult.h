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

#ifndef ALIBABACLOUD_VOD_MODEL_GETAIIMAGEJOBSRESULT_H_
#define ALIBABACLOUD_VOD_MODEL_GETAIIMAGEJOBSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/vod/VodExport.h>

namespace AlibabaCloud
{
	namespace Vod
	{
		namespace Model
		{
			class ALIBABACLOUD_VOD_EXPORT GetAIImageJobsResult : public ServiceResult
			{
			public:
				struct AIImageJob
				{
					std::string status;
					std::string videoId;
					std::string message;
					std::string userData;
					std::string creationTime;
					std::string aIImageResult;
					std::string templateConfig;
					std::string code;
					std::string jobId;
					std::string templateId;
				};


				GetAIImageJobsResult();
				explicit GetAIImageJobsResult(const std::string &payload);
				~GetAIImageJobsResult();
				std::vector<AIImageJob> getAIImageJobList()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<AIImageJob> aIImageJobList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_GETAIIMAGEJOBSRESULT_H_