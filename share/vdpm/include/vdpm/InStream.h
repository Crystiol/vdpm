/* vdpm - View-dependent progressive meshes library
* Copyright 2015 Jim Tan
* https://github.com/kctan0805/vdpm
*
* vdpm is free software; you can redistribute it and/or modify
* it under the terms of the GNU Lesser General Public License as published by
* the Free Software Foundation; either version 2 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU Lesser General Public License for more details.
*
* You should have received a copy of the GNU Lesser General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>
*/
#ifndef VDPM_INSTREAM_H
#define VDPM_INSTREAM_H

namespace vdpm
{
    class InStream
    {
    public:
        virtual void readChar(char& value) = 0;
        virtual void readUInt(unsigned int& value) = 0;
        virtual void readFloat(float& value) = 0;
    };
} // namespace vdpm

#endif // VDPM_INSTREAM_H
