#pragma once
/*
==============================================================================

SendKeys.h

This file is part of MIDI2LR. Copyright 2015-2016 by Rory Jaffe.

MIDI2LR is free software: you can redistribute it and/or modify it under the
terms of the GNU General Public License as published by the Free Software
Foundation, either version 3 of the License, or (at your option) any later version.

MIDI2LR is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE.  See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with
MIDI2LR.  If not, see <http://www.gnu.org/licenses/>.
==============================================================================
*/
#include <mutex>
#include <unordered_map>

/**********************************************************************************************//**
 * @class   SendKeys
 *
 * @brief   A send keys.
 *
 *
 **************************************************************************************************/

class SendKeys
{
public:
    SendKeys() noexcept
    {};
    ~SendKeys()
    {};
    void SendKeyDownUp(const std::string& key, bool Alt, bool Control, bool Shift) const;
private:
    static std::mutex m_mtxSending;
    static const std::unordered_map<std::string, unsigned char> keymap;
};

