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

#ifndef ALIBABACLOUD_IVPD_MODEL_RECOLORIMAGEREQUEST_H_
#define ALIBABACLOUD_IVPD_MODEL_RECOLORIMAGEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/ivpd/IvpdExport.h>

namespace AlibabaCloud
{
	namespace Ivpd
	{
		namespace Model
		{
			class ALIBABACLOUD_IVPD_EXPORT RecolorImageRequest : public RpcServiceRequest
			{
				struct ColorTemplate
				{
					std::string color;
				};

			public:
				RecolorImageRequest();
				~RecolorImageRequest();

				std::string getMode()const;
				void setMode(const std::string& mode);
				std::vector<ColorTemplate> getColorTemplate()const;
				void setColorTemplate(const std::vector<ColorTemplate>& colorTemplate);
				int getColorCount()const;
				void setColorCount(int colorCount);
				std::string getRefUrl()const;
				void setRefUrl(const std::string& refUrl);
				std::string getUrl()const;
				void setUrl(const std::string& url);

            private:
				std::string mode_;
				std::vector<ColorTemplate> colorTemplate_;
				int colorCount_;
				std::string refUrl_;
				std::string url_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IVPD_MODEL_RECOLORIMAGEREQUEST_H_