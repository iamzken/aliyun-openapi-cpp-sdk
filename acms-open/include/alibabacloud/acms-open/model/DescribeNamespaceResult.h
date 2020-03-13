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

#ifndef ALIBABACLOUD_ACMS_OPEN_MODEL_DESCRIBENAMESPACERESULT_H_
#define ALIBABACLOUD_ACMS_OPEN_MODEL_DESCRIBENAMESPACERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/acms-open/Acms_openExport.h>

namespace AlibabaCloud
{
	namespace Acms_open
	{
		namespace Model
		{
			class ALIBABACLOUD_ACMS_OPEN_EXPORT DescribeNamespaceResult : public ServiceResult
			{
			public:
				struct _Namespace
				{
					std::string secretKey;
					std::string endpoint;
					std::string regionId;
					std::string accessKey;
					std::string name;
				};


				DescribeNamespaceResult();
				explicit DescribeNamespaceResult(const std::string &payload);
				~DescribeNamespaceResult();
				std::string getMessage()const;
				_Namespace get_Namespace()const;
				std::string getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				_Namespace _namespace_;
				std::string code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ACMS_OPEN_MODEL_DESCRIBENAMESPACERESULT_H_