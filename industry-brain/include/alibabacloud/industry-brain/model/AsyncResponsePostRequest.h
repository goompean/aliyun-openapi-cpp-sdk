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

#ifndef ALIBABACLOUD_INDUSTRY_BRAIN_MODEL_ASYNCRESPONSEPOSTREQUEST_H_
#define ALIBABACLOUD_INDUSTRY_BRAIN_MODEL_ASYNCRESPONSEPOSTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/industry-brain/Industry_brainExport.h>

namespace AlibabaCloud
{
	namespace Industry_brain
	{
		namespace Model
		{
			class ALIBABACLOUD_INDUSTRY_BRAIN_EXPORT AsyncResponsePostRequest : public RpcServiceRequest
			{

			public:
				AsyncResponsePostRequest();
				~AsyncResponsePostRequest();

				std::string getData()const;
				void setData(const std::string& data);
				std::string getContext()const;
				void setContext(const std::string& context);
				float getProgress()const;
				void setProgress(float progress);
				std::string getMessage()const;
				void setMessage(const std::string& message);
				std::string getTaskId()const;
				void setTaskId(const std::string& taskId);
				std::string getStatus()const;
				void setStatus(const std::string& status);

            private:
				std::string data_;
				std::string context_;
				float progress_;
				std::string message_;
				std::string taskId_;
				std::string status_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_INDUSTRY_BRAIN_MODEL_ASYNCRESPONSEPOSTREQUEST_H_