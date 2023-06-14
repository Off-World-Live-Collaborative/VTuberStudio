# Off World Live VTuber Studio

![Scene Preview](./ReadMe/VTS.gif)

Welcome to the OWL VTuber Studio open repository! 
VTuber Studio features the vast capabilities of the Off World Live Live-Streaming Toolkit for VTubers, game streamers, and content creators. 

VTS provides streaming and capture functionalities in-game and in-editor, providing an open-source project template for users to quickly customize and package their own VTuber Studio. 


## VTuber Studio 
![Scene Preview](./ReadMe/Scene.png)

  VTS provides useful blueprints and example assets for you to easily package your UE project into a standalone VTuber Streaming Studio. 
  
  Using persistent levels, you can seamlessly import your own environments and avatars to recreate and customize your own VTuber application with preconfigured capabilities for streaming. 

### Features
 - OWL Capture Systems: Viewport Capture, CineCam Capture, 360 Capture 
 - Streaming and Media Output: Virtual Webcam, Spout Output, NDI Output, Streaming to RTMP, Save to File
 - Media Input: Screen Capture, Spout Input, NDI Input
 - Actor Blueprint to select desired capture systems, their respective render targets, and display materials
 - LiveLink 
 - Example assets such as avatars (VRM & Metahuman), environment meshes, and materials

### Dependencies
- To explore all features in VTS and package your own application, you will need to download:
 1. Unreal Engine 5.2 (https://www.unrealengine.com/en-US/download)
 2. Visual Studio 2022 (https://visualstudio.microsoft.com/vs/)
 3. OBS Studio (https://obsproject.com/download)
 4. Spout Plugin for OBS Studio (https://github.com/Off-World-Live/obs-spout2-plugin/releases)
 5. NDI Tools (https://ndi.video/type/ndi-tools/)

### How to use the VTuber Studio?
#### Download from GitHub or Download Center
- Download project from [GitHub Releases](https://github.com/Off-World-Live-Collaborative/VTuberStudio/releases) or [Download Center](https://offworld.live/resources/download-center)
- Unzip the folder
- Right-click *VTuberStudio.uproject* and select 'Generate Visual Studio project files'
- In Visual Studio 2022, open the VTuberStudio.sln file, select Solution *'VTuberStudio'* in Solution Explorer, and right-click to Build Solution
- Double-click *VTuberStudio.uproject* and open project in UE 5.2

### How can I access VTS? 
VTS is available on our [Download Center](https://offworld.live/resources/download-center) and GitHub repository.
 
We will be releasing updates regularly to provide new assets and blueprint for VTuber application development.


 ### Licensing
The OWL VTuber Studio is an *Apache-licensed* open-source Unreal project file repository on GitHub.

It allows users to use the software for any purpose, to distribute it, to modify it, and to distribute modified versions of the software under the terms of the license, without concern for royalties.

### FAQ
#### How can I get LiveLink to work in packaged game?
You may double-click *RunVTuberStudio.bat* to run the packaged game with messaging enabled under file path:  `../VTuberStudio/Builds/Windows/RunVTuberStudio.bat` 

Alternatively, you may use `Command Prompt` and `cd` into the appropriate file path, such as `../VTuberStudio/Builds/Windows/`, and use the following command line:

```
 VTuberStudio.exe -messaging
```

### Contributions
VTS is a community-led and orientated project, encouraging collaboration and contribution among content creators with or without experience in game development.

To contribute to VTuber Studio, it is recommended that you submit changes in one blueprint at a time. 

After you initiate a pull request, the OWL team will review/ approve each request individually to ensure that proposed changes are aligned with our style requirements.


#### Acknowledgement
VTS relies on the VRM4U plugin created by [@ruyo_h](https://twitter.com/ruyo_h). VRM4U plugin can be found here (https://github.com/ruyo/VRM4U). The plugin is licensed under the MIT license.

OWLStreamingToolkit is Copyright © 2021 Off World Live Limited. All rights reserved.

#### Contributors
VTuber Studio is created by [@wesleyyuen](https://github.com/wesleyyuen) and [@jennnital](https://github.com/jennnital) with the support of the Off World Live team.
Key visual assets and environment design by [@enpe23](https://github.com/enpe23) and [@HardcoreRick](https://github.com/HardcoreRick).
Special thanks to [@campbellwmorgan](https://github.com/campbellwmorgan) [@fdomw](https://github.com/fdomw) for the development of VTuber Studio.


![Scene Preview](./ReadMe/OWLLogo.png)
### [Off World Live](https://offworld.live/)

Off World Live is a creator-focused engineering and research group democratizing media content creation in Unreal Engine. 

To learn more about our products and relevant licenses, please join our community on [Discord](https://discord.gg/EqR7FYjqPs). 



