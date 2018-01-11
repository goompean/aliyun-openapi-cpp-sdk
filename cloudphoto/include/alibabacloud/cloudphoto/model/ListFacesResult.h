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

#ifndef ALIBABACLOUD_CLOUDPHOTO_MODEL_LISTFACESRESULT_H_
#define ALIBABACLOUD_CLOUDPHOTO_MODEL_LISTFACESRESULT_H_

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
			class ALIBABACLOUD_CLOUDPHOTO_EXPORT ListFacesResult : public ServiceResult
			{
			public:
				struct Face
				{
					struct Cover
					{
						bool isVideo;
						std::string state;
						long ctime;
						std::string title;
						long mtime;
						std::string fileId;
						long height;
						long id;
						long width;
						std::string md5;
						std::string remark;
					};
					bool isMe;
					std::vector<Cover> cover;
					std::string state;
					long ctime;
					int photosCount;
					long mtime;
					long id;
					std::vector<std::string> axis;
					std::string name;
				};


				ListFacesResult();
				explicit ListFacesResult(const std::string &payload);
				~ListFacesResult();
				std::string getNextCursor()const;
				void setNextCursor(const std::string& nextCursor);
				int getTotalCount()const;
				void setTotalCount(int totalCount);
				std::string getAction()const;
				void setAction(const std::string& action);
				std::string getMessage()const;
				void setMessage(const std::string& message);
				std::string getCode()const;
				void setCode(const std::string& code);
				std::vector<Face> getFaces()const;
				void setFaces(const std::vector<Face>& faces);

			protected:
				void parse(const std::string &payload);
			private:
				std::string nextCursor_;
				int totalCount_;
				std::string action_;
				std::string message_;
				std::string code_;
				std::vector<Face> faces_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDPHOTO_MODEL_LISTFACESRESULT_H_