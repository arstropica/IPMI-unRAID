/*
 * Copyright (C) 2003-2015 FreeIPMI Core Team
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 * 
 */

#ifndef IPMI_SENSOR_AND_EVENT_CODE_TABLES_OEM_QUANTA_SPEC_H
#define IPMI_SENSOR_AND_EVENT_CODE_TABLES_OEM_QUANTA_SPEC_H

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Quanta S99Q/Dell FS12-TY
 */

#define IPMI_SENSOR_TYPE_MEMORY_EVENT_DATA3_OEM_QUANTA_S99Q_DIMM_A0 0x01
#define IPMI_SENSOR_TYPE_MEMORY_EVENT_DATA3_OEM_QUANTA_S99Q_DIMM_A1 0x02
#define IPMI_SENSOR_TYPE_MEMORY_EVENT_DATA3_OEM_QUANTA_S99Q_DIMM_A2 0x03
#define IPMI_SENSOR_TYPE_MEMORY_EVENT_DATA3_OEM_QUANTA_S99Q_DIMM_B0 0x04
#define IPMI_SENSOR_TYPE_MEMORY_EVENT_DATA3_OEM_QUANTA_S99Q_DIMM_B1 0x05
#define IPMI_SENSOR_TYPE_MEMORY_EVENT_DATA3_OEM_QUANTA_S99Q_DIMM_B2 0x06
#define IPMI_SENSOR_TYPE_MEMORY_EVENT_DATA3_OEM_QUANTA_S99Q_DIMM_C0 0x07
#define IPMI_SENSOR_TYPE_MEMORY_EVENT_DATA3_OEM_QUANTA_S99Q_DIMM_C1 0x08
#define IPMI_SENSOR_TYPE_MEMORY_EVENT_DATA3_OEM_QUANTA_S99Q_DIMM_C2 0x09
#define IPMI_SENSOR_TYPE_MEMORY_EVENT_DATA3_OEM_QUANTA_S99Q_DIMM_D0 0x0A
#define IPMI_SENSOR_TYPE_MEMORY_EVENT_DATA3_OEM_QUANTA_S99Q_DIMM_D1 0x0B
#define IPMI_SENSOR_TYPE_MEMORY_EVENT_DATA3_OEM_QUANTA_S99Q_DIMM_D2 0x0C
#define IPMI_SENSOR_TYPE_MEMORY_EVENT_DATA3_OEM_QUANTA_S99Q_DIMM_E0 0x0D
#define IPMI_SENSOR_TYPE_MEMORY_EVENT_DATA3_OEM_QUANTA_S99Q_DIMM_E1 0x0E
#define IPMI_SENSOR_TYPE_MEMORY_EVENT_DATA3_OEM_QUANTA_S99Q_DIMM_E2 0x0F
#define IPMI_SENSOR_TYPE_MEMORY_EVENT_DATA3_OEM_QUANTA_S99Q_DIMM_F0 0x10
#define IPMI_SENSOR_TYPE_MEMORY_EVENT_DATA3_OEM_QUANTA_S99Q_DIMM_F1 0x11
#define IPMI_SENSOR_TYPE_MEMORY_EVENT_DATA3_OEM_QUANTA_S99Q_DIMM_F2 0x12

#define IPMI_SENSOR_TYPE_CRITICAL_INTERRUPT_OEM_QUANTA_EVENT_DATA2_DEVICE_NUMBER_BITMASK   0xF8
#define IPMI_SENSOR_TYPE_CRITICAL_INTERRUPT_OEM_QUANTA_EVENT_DATA2_DEVICE_NUMBER_SHIFT     3

#define IPMI_SENSOR_TYPE_CRITICAL_INTERRUPT_OEM_QUANTA_EVENT_DATA2_FUNCTION_NUMBER_BITMASK 0x07
#define IPMI_SENSOR_TYPE_CRITICAL_INTERRUPT_OEM_QUANTA_EVENT_DATA2_FUNCTION_NUMBER_SHIFT   0

#define IPMI_SENSOR_TYPE_CRITICAL_INTERRUPT_OEM_QUANTA_EVENT_DATA3_QPI0_ERROR           0
#define IPMI_SENSOR_TYPE_CRITICAL_INTERRUPT_OEM_QUANTA_EVENT_DATA3_QPI1_ERROR           1
#define IPMI_SENSOR_TYPE_CRITICAL_INTERRUPT_OEM_QUANTA_EVENT_DATA3_QPI2_ERROR           2
#define IPMI_SENSOR_TYPE_CRITICAL_INTERRUPT_OEM_QUANTA_EVENT_DATA3_QPI3_ERROR           3
#define IPMI_SENSOR_TYPE_CRITICAL_INTERRUPT_OEM_QUANTA_EVENT_DATA3_MISCELLANEOUS_ERROR 23
#define IPMI_SENSOR_TYPE_CRITICAL_INTERRUPT_OEM_QUANTA_EVENT_DATA3_IOH_CORE_ERROR      24

#define IPMI_OEM_QUANTA_EVENT_DATA

#ifdef __cplusplus
}
#endif

#endif /* IPMI_SENSOR_AND_EVENT_CODE_TABLES_OEM_QUANTA_SPEC_H */
