/**************************************************************************
 *
 * Copyright 2007-2009 VMware, Inc.
 * All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 **************************************************************************/

#ifndef _LOG_HPP_
#define _LOG_HPP_

namespace Log {

    void Open(const char *name);
    void ReOpen(void);
    void Close(void);
    
    void BeginCall(const char *function);
    void EndCall(void);
    
    void BeginArg(const char *type, const char *name);
    void EndArg(void);

    void BeginReturn(const char *type);
    void EndReturn(void);

    void BeginArray(const char *type, size_t length);
    void EndArray(void);

    void BeginElement(const char *type);
    void EndElement(void);

    void BeginStruct(const char *type);
    void EndStruct(void);

    void BeginMember(const char *type, const char *name);
    void EndMember(void);

    void BeginBitmask(const char *type);
    void EndBitmask(void);

    void BeginReference(const char *type, const void *addr);
    void EndReference(void);

    void LiteralBool(bool value);
    void LiteralSInt(signed long long value);
    void LiteralUInt(unsigned long long value);
    void LiteralFloat(double value);
    void LiteralString(const char *str);
    void LiteralWString(const wchar_t *str);
    void LiteralNamedConstant(const char *str);
    void LiteralOpaque(const void *addr);
    void LiteralNull(void);
}

#endif /* _LOG_HPP_ */
