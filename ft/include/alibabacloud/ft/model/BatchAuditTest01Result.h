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

#ifndef ALIBABACLOUD_FT_MODEL_BATCHAUDITTEST01RESULT_H_
#define ALIBABACLOUD_FT_MODEL_BATCHAUDITTEST01RESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ft/FtExport.h>

namespace AlibabaCloud
{
	namespace Ft
	{
		namespace Model
		{
			class ALIBABACLOUD_FT_EXPORT BatchAuditTest01Result : public ServiceResult
			{
			public:
				struct Demo01
				{
					struct Demo011Item
					{
						std::string demo0111;
					};
					std::vector<Demo011Item> demo011;
				};


				BatchAuditTest01Result();
				explicit BatchAuditTest01Result(const std::string &payload);
				~BatchAuditTest01Result();
				Demo01 getDemo01()const;
				std::string getName()const;

			protected:
				void parse(const std::string &payload);
			private:
				Demo01 demo01_;
				std::string name_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_FT_MODEL_BATCHAUDITTEST01RESULT_H_