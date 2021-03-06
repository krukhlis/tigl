/* 
 * Copyright (C) 2007-2014 German Aerospace Center (DLR/SC)
 *
 * Created: 2014-10-23 Martin Siggel <martin.siggel@dlr.de>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package de.dlr.sc.tigl3;

public class TiglException extends Exception{

	private static final long serialVersionUID = 1L;
	
	private TiglReturnCode errorCode = TiglReturnCode.TIGL_SUCCESS;
	private String message = "";
	
	public TiglException(String msg, TiglReturnCode errorcode) {
		this.errorCode = errorcode;
		this.message = msg;
	}
	
	public int getErrorCode() {
		return errorCode.getValue();
	}
	
	@Override
	public String getMessage() {
		return "TiglException: " + message + " Error code " + errorCode.toString()  
				+ "(" + errorCode.getValue() + ")";
	}
}