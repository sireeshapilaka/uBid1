//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
// 

package ubid.simulations;

import ubid.corenetwork.Negotiation.Negotiator;
import ubid.corenetwork.nodes.Ue;

network Network
{
    parameters:
            @display("i=block/network2;bgb=6000,6000;");
    submodules:
    	networkAgent: Negotiator {}
    	ue[50]: Ue {}
}