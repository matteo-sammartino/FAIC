//
//  FSManager.hpp
//  Function Analysis In Codebases
//
//  Created by Tiago Ferreira on 11/10/2017.
//  Copyright 2017 Tiago Ferreira
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
//  WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
//  CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//

#ifndef FSMANAGER_INCLUDE
#define FSMANAGER_INCLUDE

#include "boost/filesystem.hpp"
#include <string>
#include <vector>

bool isCPPFile(boost::filesystem::path filePath);
std::vector<std::string> filesFromPath(std::string rootPath);

#endif
