# CMSSupport

## OpenSSL

The Swift package contained within this repo is provided to allow Bridge studies to use OpenSSL to upload 
archives that need to be signed with a .pem file.

The intended use is to apply Bridge-compatible CMS encryption to sensitive data files while they reside on the 
device awaiting upload, and during the upload process.

You will also need to supply an X.509 public encryption key (.pem) file, whose name is your Bridge study name
with the .pem extension, in your app's resources.

## CMSSupport - Deprecated

CMSSupport.xcodeproj is only included here for older projects that still use AppCore. That project builds a 
drop-in framework you can link into your app alongside AppCore.

You can either build the framework target of CMSSupport, copy it to your app's project folder, and link to it
as a standalone framework; or add CMSSupport as a subproject of your app's project, and link to its framework
target's product.

The CMSSupport project is provided as-is and is no longer actively supported by Sage Bionetworks.

## License

CMSSupport is available under the BSD license:

	Copyright (c) 2015, Sage Bionetworks
	All rights reserved.

	Redistribution and use in source and binary forms, with or without
	modification, are permitted provided that the following conditions are met:
	    * Redistributions of source code must retain the above copyright
	      notice, this list of conditions and the following disclaimer.
	    * Redistributions in binary form must reproduce the above copyright
	      notice, this list of conditions and the following disclaimer in the
	      documentation and/or other materials provided with the distribution.
	    * Neither the name of Sage Bionetworks nor the names of BridgeSDk's
		  contributors may be used to endorse or promote products derived from
		  this software without specific prior written permission.

	THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
	ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
	WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
	DISCLAIMED. IN NO EVENT SHALL <COPYRIGHT HOLDER> BE LIABLE FOR ANY
	DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
	(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
	LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
	ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
	(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
	SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
