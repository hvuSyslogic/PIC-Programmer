// 
// Copyright 2005-2012 Jeff Bush
// 
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// 
//     http://www.apache.org/licenses/LICENSE-2.0
// 
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
// 

//
// This file contains the hardware/os dependent interface for controlling
// the programming lines.
//

#ifndef __IO_H
#define __IO_H

#define HIGH 1
#define LOW 0

int InitIo(int debug);
void SetMclr(int level);
void SetVdd(int level);
void SetClock(int level);
void SetData(int level);
void SetLvp(int level);

// Note: you must set data HIGH before reading data
int ReadData(void);
void Delay(int microseconds);

#endif

