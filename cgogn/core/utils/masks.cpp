/*******************************************************************************
* CGoGN: Combinatorial and Geometric modeling with Generic N-dimensional Maps  *
* Copyright (C) 2015, IGG Group, ICube, University of Strasbourg, France       *
*                                                                              *
* This library is free software; you can redistribute it and/or modify it      *
* under the terms of the GNU Lesser General Public License as published by the *
* Free Software Foundation; either version 2.1 of the License, or (at your     *
* option) any later version.                                                   *
*                                                                              *
* This library is distributed in the hope that it will be useful, but WITHOUT  *
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or        *
* FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License  *
* for more details.                                                            *
*                                                                              *
* You should have received a copy of the GNU Lesser General Public License     *
* along with this library; if not, write to the Free Software Foundation,      *
* Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301 USA.           *
*                                                                              *
* Web site: http://cgogn.unistra.fr/                                           *
* Contact information: cgogn@unistra.fr                                        *
*                                                                              *
*******************************************************************************/

#define CGOGN_CORE_UTILS_MASKS_CPP_

#include <cgogn/core/utils/masks.h>
#include <cgogn/core/cmap/cmap3.h>

namespace cgogn
{

template class CGOGN_CORE_API CellCache<CMap2_T<CMap2Type>>;
template class CGOGN_CORE_API CellCache<CMap3_T<CMap3Type>>;
template class CGOGN_CORE_API BoundaryCache<CMap2_T<CMap2Type>>;
template class CGOGN_CORE_API BoundaryCache<CMap3_T<CMap3Type>>;


CellFilters::~CellFilters()
{}

void CellFilters::operator()(uint32) const
{}

CellTraversor::~CellTraversor()
{}

void CellTraversor::operator()(uint32) const
{}

} // namespace cgogn
