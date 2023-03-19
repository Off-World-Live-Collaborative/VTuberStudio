using UnrealBuildTool;
using System.IO;
using EpicGames.Core;

public class FFmpeg : ModuleRules
{
	public FFmpeg(ReadOnlyTargetRules Target) : base(Target)
	{
		Type = ModuleType.External;

		if (Target.Platform == UnrealTargetPlatform.Win64)
		{
			//---------------------------------------------------------------------------
			// Paths
			//---------------------------------------------------------------------------
			string ffmpegDirectory = ModuleDirectory;

			PublicIncludePaths.Add(Path.Combine(ffmpegDirectory, "include"));
			string binDirectory = Path.Combine(ffmpegDirectory, "bin");
			string libDirectory = Path.Combine(ffmpegDirectory, "lib");

			PublicRuntimeLibraryPaths.Add(binDirectory);
			//---------------------------------------------------------------------------

			//---------------------------------------------------------------------------
			// Libraries
			//---------------------------------------------------------------------------
			string[] libs =
			{
				"avutil.lib",
				"avdevice.lib",
				"swresample.lib",
				"avcodec.lib",
				"swscale.lib",
				"avfilter.lib",
				"avformat.lib",

				"libcrypto.lib",
				"libssl.lib",
				"srt.lib",
			};

			foreach (string lib in libs)
			{
				PublicAdditionalLibraries.Add(Path.Combine(libDirectory, lib));
			}
			//---------------------------------------------------------------------------

			//---------------------------------------------------------------------------
			// DLLs
			//---------------------------------------------------------------------------
			string[] dlls = {
				"libcrypto-3-x64.dll",
				"libssl-3-x64.dll",
				"avutil-56.dll",
				"avdevice-58.dll",
				"swresample-3.dll",
				"avcodec-58.dll",
				"swscale-5.dll",
				"avfilter-7.dll",
				"avformat-58.dll",

				"libcrypto-1_1-x64.dll",
				"libssl-1_1-x64.dll",
				"srt.dll",
			};

			foreach (string dll in dlls)
			{
				PublicDelayLoadDLLs.Add(dll);
				RuntimeDependencies.Add(Path.Combine(binDirectory, dll));
			}
			//---------------------------------------------------------------------------
		}
	}
}