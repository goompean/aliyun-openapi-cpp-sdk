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

#ifndef ALIBABACLOUD_CLOUDPHOTO_MODEL_GETDOWNLOADURLSRESULT_H_
#define ALIBABACLOUD_CLOUDPHOTO_MODEL_GETDOWNLOADURLSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cloudphoto/CloudPhotoExport.h>

namespace AlibabaCloud
{
	namespace CloudPhoto
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDPHOTO_EXPORT GetDownloadUrlsResult : public ServiceResult
			{
			public:
				struct Result
				{
					long photoId;
					std::string message;
					std::string code;
					std::string downloadUrl;
				};


				GetDownloadUrlsResult();
				explicit GetDownloadUrlsResult(const std::string &payload);
				~GetDownloadUrlsResult();
				std::string getAction()const;
				void setAction(const std::string& action);
				std::string getMessage()const;
				void setMessage(const std::string& message);
				std::vector<Result> getResults()const;
				void setResults(const std::vector<Result>& results);
				std::string getCode()const;
				void setCode(const std::string& code);

			protected:
				void parse(const std::string &payload);
			private:
				std::string action_;
				std::string message_;
				std::vector<Result> results_;
				std::string code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDPHOTO_MODEL_GETDOWNLOADURLSRESULT_H_