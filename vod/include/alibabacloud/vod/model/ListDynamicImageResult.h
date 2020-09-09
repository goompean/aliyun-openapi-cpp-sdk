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

#ifndef ALIBABACLOUD_VOD_MODEL_LISTDYNAMICIMAGERESULT_H_
#define ALIBABACLOUD_VOD_MODEL_LISTDYNAMICIMAGERESULT_H_

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
			class ALIBABACLOUD_VOD_EXPORT ListDynamicImageResult : public ServiceResult
			{
			public:
				struct DynamicImage
				{
					std::string fileURL;
					std::string videoId;
					std::string format;
					std::string fps;
					std::string creationTime;
					std::string dynamicImageId;
					std::string height;
					std::string duration;
					std::string width;
					std::string jobId;
					std::string fileSize;
				};


				ListDynamicImageResult();
				explicit ListDynamicImageResult(const std::string &payload);
				~ListDynamicImageResult();
				std::vector<DynamicImage> getDynamicImageList()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<DynamicImage> dynamicImageList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VOD_MODEL_LISTDYNAMICIMAGERESULT_H_