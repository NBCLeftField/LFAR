void RegisterAllStrippedInternalCalls()
{
	//Start Registrations for type : UnityEngine.Animation

		//System.Int32 UnityEngine.Animation::GetStateCount()
		void Register_UnityEngine_Animation_GetStateCount();
		Register_UnityEngine_Animation_GetStateCount();

		//UnityEngine.AnimationState UnityEngine.Animation::GetStateAtIndex(System.Int32)
		void Register_UnityEngine_Animation_GetStateAtIndex();
		Register_UnityEngine_Animation_GetStateAtIndex();

	//End Registrations for type : UnityEngine.Animation

	//Start Registrations for type : UnityEngine.AnimationClip

		//System.Boolean UnityEngine.AnimationClip::get_empty()
		void Register_UnityEngine_AnimationClip_get_empty();
		Register_UnityEngine_AnimationClip_get_empty();

		//System.Boolean UnityEngine.AnimationClip::get_hasRootMotion()
		void Register_UnityEngine_AnimationClip_get_hasRootMotion();
		Register_UnityEngine_AnimationClip_get_hasRootMotion();

		//System.Boolean UnityEngine.AnimationClip::get_legacy()
		void Register_UnityEngine_AnimationClip_get_legacy();
		Register_UnityEngine_AnimationClip_get_legacy();

		//System.Single UnityEngine.AnimationClip::get_frameRate()
		void Register_UnityEngine_AnimationClip_get_frameRate();
		Register_UnityEngine_AnimationClip_get_frameRate();

		//System.Single UnityEngine.AnimationClip::get_length()
		void Register_UnityEngine_AnimationClip_get_length();
		Register_UnityEngine_AnimationClip_get_length();

		//System.Void UnityEngine.AnimationClip::Internal_CreateAnimationClip(UnityEngine.AnimationClip)
		void Register_UnityEngine_AnimationClip_Internal_CreateAnimationClip();
		Register_UnityEngine_AnimationClip_Internal_CreateAnimationClip();

		//System.Void UnityEngine.AnimationClip::set_legacy(System.Boolean)
		void Register_UnityEngine_AnimationClip_set_legacy();
		Register_UnityEngine_AnimationClip_set_legacy();

	//End Registrations for type : UnityEngine.AnimationClip

	//Start Registrations for type : UnityEngine.AnimationCurve

		//System.Int32 UnityEngine.AnimationCurve::INTERNAL_CALL_AddKey_Internal(UnityEngine.AnimationCurve,UnityEngine.Keyframe&)
		void Register_UnityEngine_AnimationCurve_INTERNAL_CALL_AddKey_Internal();
		Register_UnityEngine_AnimationCurve_INTERNAL_CALL_AddKey_Internal();

		//System.Int32 UnityEngine.AnimationCurve::get_length()
		void Register_UnityEngine_AnimationCurve_get_length();
		Register_UnityEngine_AnimationCurve_get_length();

		//System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
		void Register_UnityEngine_AnimationCurve_Evaluate();
		Register_UnityEngine_AnimationCurve_Evaluate();

		//System.Void UnityEngine.AnimationCurve::Cleanup()
		void Register_UnityEngine_AnimationCurve_Cleanup();
		Register_UnityEngine_AnimationCurve_Cleanup();

		//System.Void UnityEngine.AnimationCurve::INTERNAL_CALL_GetKey_Internal(UnityEngine.AnimationCurve,System.Int32,UnityEngine.Keyframe&)
		void Register_UnityEngine_AnimationCurve_INTERNAL_CALL_GetKey_Internal();
		Register_UnityEngine_AnimationCurve_INTERNAL_CALL_GetKey_Internal();

		//System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
		void Register_UnityEngine_AnimationCurve_Init();
		Register_UnityEngine_AnimationCurve_Init();

		//System.Void UnityEngine.AnimationCurve::SetKeys(UnityEngine.Keyframe[])
		void Register_UnityEngine_AnimationCurve_SetKeys();
		Register_UnityEngine_AnimationCurve_SetKeys();

		//UnityEngine.Keyframe[] UnityEngine.AnimationCurve::GetKeys()
		void Register_UnityEngine_AnimationCurve_GetKeys();
		Register_UnityEngine_AnimationCurve_GetKeys();

	//End Registrations for type : UnityEngine.AnimationCurve

	//Start Registrations for type : UnityEngine.Animations.AnimationClipPlayable

		//System.Boolean UnityEngine.Animations.AnimationClipPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.AnimationClip,UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Animations_AnimationClipPlayable_CreateHandleInternal_Injected();
		Register_UnityEngine_Animations_AnimationClipPlayable_CreateHandleInternal_Injected();

		//System.Boolean UnityEngine.Animations.AnimationClipPlayable::GetApplyFootIKInternal(UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Animations_AnimationClipPlayable_GetApplyFootIKInternal();
		Register_UnityEngine_Animations_AnimationClipPlayable_GetApplyFootIKInternal();

		//System.Boolean UnityEngine.Animations.AnimationClipPlayable::GetApplyPlayableIKInternal(UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Animations_AnimationClipPlayable_GetApplyPlayableIKInternal();
		Register_UnityEngine_Animations_AnimationClipPlayable_GetApplyPlayableIKInternal();

		//System.Boolean UnityEngine.Animations.AnimationClipPlayable::GetRemoveStartOffsetInternal(UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Animations_AnimationClipPlayable_GetRemoveStartOffsetInternal();
		Register_UnityEngine_Animations_AnimationClipPlayable_GetRemoveStartOffsetInternal();

		//System.Void UnityEngine.Animations.AnimationClipPlayable::SetRemoveStartOffsetInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)
		void Register_UnityEngine_Animations_AnimationClipPlayable_SetRemoveStartOffsetInternal();
		Register_UnityEngine_Animations_AnimationClipPlayable_SetRemoveStartOffsetInternal();

		//UnityEngine.AnimationClip UnityEngine.Animations.AnimationClipPlayable::GetAnimationClipInternal(UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Animations_AnimationClipPlayable_GetAnimationClipInternal();
		Register_UnityEngine_Animations_AnimationClipPlayable_GetAnimationClipInternal();

	//End Registrations for type : UnityEngine.Animations.AnimationClipPlayable

	//Start Registrations for type : UnityEngine.Animations.AnimationLayerMixerPlayable

		//System.Boolean UnityEngine.Animations.AnimationLayerMixerPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Animations_AnimationLayerMixerPlayable_CreateHandleInternal_Injected();
		Register_UnityEngine_Animations_AnimationLayerMixerPlayable_CreateHandleInternal_Injected();

		//System.Void UnityEngine.Animations.AnimationLayerMixerPlayable::SetLayerMaskFromAvatarMaskInternal(UnityEngine.Playables.PlayableHandle&,System.UInt32,UnityEngine.AvatarMask)
		void Register_UnityEngine_Animations_AnimationLayerMixerPlayable_SetLayerMaskFromAvatarMaskInternal();
		Register_UnityEngine_Animations_AnimationLayerMixerPlayable_SetLayerMaskFromAvatarMaskInternal();

	//End Registrations for type : UnityEngine.Animations.AnimationLayerMixerPlayable

	//Start Registrations for type : UnityEngine.Animations.AnimationMixerPlayable

		//System.Boolean UnityEngine.Animations.AnimationMixerPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,System.Int32,System.Boolean,UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Animations_AnimationMixerPlayable_CreateHandleInternal_Injected();
		Register_UnityEngine_Animations_AnimationMixerPlayable_CreateHandleInternal_Injected();

	//End Registrations for type : UnityEngine.Animations.AnimationMixerPlayable

	//Start Registrations for type : UnityEngine.Animations.AnimationMotionXToDeltaPlayable

		//System.Boolean UnityEngine.Animations.AnimationMotionXToDeltaPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Animations_AnimationMotionXToDeltaPlayable_CreateHandleInternal_Injected();
		Register_UnityEngine_Animations_AnimationMotionXToDeltaPlayable_CreateHandleInternal_Injected();

	//End Registrations for type : UnityEngine.Animations.AnimationMotionXToDeltaPlayable

	//Start Registrations for type : UnityEngine.Animations.AnimationOffsetPlayable

		//System.Boolean UnityEngine.Animations.AnimationOffsetPlayable::CreateHandleInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Animations_AnimationOffsetPlayable_CreateHandleInternal_Injected();
		Register_UnityEngine_Animations_AnimationOffsetPlayable_CreateHandleInternal_Injected();

		//System.Void UnityEngine.Animations.AnimationOffsetPlayable::GetPositionInternal_Injected(UnityEngine.Playables.PlayableHandle&,UnityEngine.Vector3&)
		void Register_UnityEngine_Animations_AnimationOffsetPlayable_GetPositionInternal_Injected();
		Register_UnityEngine_Animations_AnimationOffsetPlayable_GetPositionInternal_Injected();

		//System.Void UnityEngine.Animations.AnimationOffsetPlayable::GetRotationInternal_Injected(UnityEngine.Playables.PlayableHandle&,UnityEngine.Quaternion&)
		void Register_UnityEngine_Animations_AnimationOffsetPlayable_GetRotationInternal_Injected();
		Register_UnityEngine_Animations_AnimationOffsetPlayable_GetRotationInternal_Injected();

	//End Registrations for type : UnityEngine.Animations.AnimationOffsetPlayable

	//Start Registrations for type : UnityEngine.Animations.AnimationPlayableExtensions

		//System.Void UnityEngine.Animations.AnimationPlayableExtensions::SetAnimatedPropertiesInternal(UnityEngine.Playables.PlayableHandle&,UnityEngine.AnimationClip)
		void Register_UnityEngine_Animations_AnimationPlayableExtensions_SetAnimatedPropertiesInternal();
		Register_UnityEngine_Animations_AnimationPlayableExtensions_SetAnimatedPropertiesInternal();

	//End Registrations for type : UnityEngine.Animations.AnimationPlayableExtensions

	//Start Registrations for type : UnityEngine.Animations.AnimationPlayableGraphExtensions

		//System.Boolean UnityEngine.Animations.AnimationPlayableGraphExtensions::InternalCreateAnimationOutput(UnityEngine.Playables.PlayableGraph&,System.String,UnityEngine.Playables.PlayableOutputHandle&)
		void Register_UnityEngine_Animations_AnimationPlayableGraphExtensions_InternalCreateAnimationOutput();
		Register_UnityEngine_Animations_AnimationPlayableGraphExtensions_InternalCreateAnimationOutput();

	//End Registrations for type : UnityEngine.Animations.AnimationPlayableGraphExtensions

	//Start Registrations for type : UnityEngine.Animations.AnimationPlayableOutput

		//System.Void UnityEngine.Animations.AnimationPlayableOutput::InternalSetTarget(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.Animator)
		void Register_UnityEngine_Animations_AnimationPlayableOutput_InternalSetTarget();
		Register_UnityEngine_Animations_AnimationPlayableOutput_InternalSetTarget();

		//UnityEngine.Animator UnityEngine.Animations.AnimationPlayableOutput::InternalGetTarget(UnityEngine.Playables.PlayableOutputHandle&)
		void Register_UnityEngine_Animations_AnimationPlayableOutput_InternalGetTarget();
		Register_UnityEngine_Animations_AnimationPlayableOutput_InternalGetTarget();

	//End Registrations for type : UnityEngine.Animations.AnimationPlayableOutput

	//Start Registrations for type : UnityEngine.Animator

		//System.Boolean UnityEngine.Animator::get_hasBoundPlayables()
		void Register_UnityEngine_Animator_get_hasBoundPlayables();
		Register_UnityEngine_Animator_get_hasBoundPlayables();

		//System.Void UnityEngine.Animator::ResetTriggerString(System.String)
		void Register_UnityEngine_Animator_ResetTriggerString();
		Register_UnityEngine_Animator_ResetTriggerString();

		//System.Void UnityEngine.Animator::SetBoolString(System.String,System.Boolean)
		void Register_UnityEngine_Animator_SetBoolString();
		Register_UnityEngine_Animator_SetBoolString();

		//System.Void UnityEngine.Animator::SetTriggerString(System.String)
		void Register_UnityEngine_Animator_SetTriggerString();
		Register_UnityEngine_Animator_SetTriggerString();

		//System.Void UnityEngine.Animator::set_speed(System.Single)
		void Register_UnityEngine_Animator_set_speed();
		Register_UnityEngine_Animator_set_speed();

	//End Registrations for type : UnityEngine.Animator

	//Start Registrations for type : UnityEngine.Application

		//System.Boolean UnityEngine.Application::get_isEditor()
		void Register_UnityEngine_Application_get_isEditor();
		Register_UnityEngine_Application_get_isEditor();

		//System.Boolean UnityEngine.Application::get_isPlaying()
		void Register_UnityEngine_Application_get_isPlaying();
		Register_UnityEngine_Application_get_isPlaying();

		//System.String UnityEngine.Application::get_dataPath()
		void Register_UnityEngine_Application_get_dataPath();
		Register_UnityEngine_Application_get_dataPath();

		//System.String UnityEngine.Application::get_persistentDataPath()
		void Register_UnityEngine_Application_get_persistentDataPath();
		Register_UnityEngine_Application_get_persistentDataPath();

		//System.Void UnityEngine.Application::set_targetFrameRate(System.Int32)
		void Register_UnityEngine_Application_set_targetFrameRate();
		Register_UnityEngine_Application_set_targetFrameRate();

		//UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
		void Register_UnityEngine_Application_get_platform();
		Register_UnityEngine_Application_get_platform();

	//End Registrations for type : UnityEngine.Application

	//Start Registrations for type : UnityEngine.AssetBundle

		//System.String[] UnityEngine.AssetBundle::GetAllAssetNames()
		void Register_UnityEngine_AssetBundle_GetAllAssetNames();
		Register_UnityEngine_AssetBundle_GetAllAssetNames();

		//System.String[] UnityEngine.AssetBundle::GetAllScenePaths()
		void Register_UnityEngine_AssetBundle_GetAllScenePaths();
		Register_UnityEngine_AssetBundle_GetAllScenePaths();

		//System.Void UnityEngine.AssetBundle::Unload(System.Boolean)
		void Register_UnityEngine_AssetBundle_Unload();
		Register_UnityEngine_AssetBundle_Unload();

		//UnityEngine.AssetBundle UnityEngine.AssetBundle::LoadFromFile(System.String,System.UInt32,System.UInt64)
		void Register_UnityEngine_AssetBundle_LoadFromFile();
		Register_UnityEngine_AssetBundle_LoadFromFile();

		//UnityEngine.AssetBundle UnityEngine.AssetBundle::LoadFromMemory(System.Byte[],System.UInt32)
		void Register_UnityEngine_AssetBundle_LoadFromMemory();
		Register_UnityEngine_AssetBundle_LoadFromMemory();

		//UnityEngine.AssetBundleCreateRequest UnityEngine.AssetBundle::LoadFromFileAsync(System.String,System.UInt32,System.UInt64)
		void Register_UnityEngine_AssetBundle_LoadFromFileAsync();
		Register_UnityEngine_AssetBundle_LoadFromFileAsync();

		//UnityEngine.Object UnityEngine.AssetBundle::LoadAsset_Internal(System.String,System.Type)
		void Register_UnityEngine_AssetBundle_LoadAsset_Internal();
		Register_UnityEngine_AssetBundle_LoadAsset_Internal();

		//UnityEngine.Object UnityEngine.AssetBundle::get_mainAsset()
		void Register_UnityEngine_AssetBundle_get_mainAsset();
		Register_UnityEngine_AssetBundle_get_mainAsset();

	//End Registrations for type : UnityEngine.AssetBundle

	//Start Registrations for type : UnityEngine.AssetBundleCreateRequest

		//UnityEngine.AssetBundle UnityEngine.AssetBundleCreateRequest::get_assetBundle()
		void Register_UnityEngine_AssetBundleCreateRequest_get_assetBundle();
		Register_UnityEngine_AssetBundleCreateRequest_get_assetBundle();

	//End Registrations for type : UnityEngine.AssetBundleCreateRequest

	//Start Registrations for type : UnityEngine.AsyncOperation

		//System.Void UnityEngine.AsyncOperation::InternalDestroy()
		void Register_UnityEngine_AsyncOperation_InternalDestroy();
		Register_UnityEngine_AsyncOperation_InternalDestroy();

	//End Registrations for type : UnityEngine.AsyncOperation

	//Start Registrations for type : UnityEngine.Audio.AudioClipPlayable

		//System.Boolean UnityEngine.Audio.AudioClipPlayable::GetIsChannelPlayingInternal(UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Audio_AudioClipPlayable_GetIsChannelPlayingInternal();
		Register_UnityEngine_Audio_AudioClipPlayable_GetIsChannelPlayingInternal();

		//System.Boolean UnityEngine.Audio.AudioClipPlayable::GetLoopedInternal(UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Audio_AudioClipPlayable_GetLoopedInternal();
		Register_UnityEngine_Audio_AudioClipPlayable_GetLoopedInternal();

		//System.Boolean UnityEngine.Audio.AudioClipPlayable::InternalCreateAudioClipPlayable(UnityEngine.Playables.PlayableGraph&,UnityEngine.AudioClip,System.Boolean,UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Audio_AudioClipPlayable_InternalCreateAudioClipPlayable();
		Register_UnityEngine_Audio_AudioClipPlayable_InternalCreateAudioClipPlayable();

		//System.Double UnityEngine.Audio.AudioClipPlayable::GetPauseDelayInternal(UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Audio_AudioClipPlayable_GetPauseDelayInternal();
		Register_UnityEngine_Audio_AudioClipPlayable_GetPauseDelayInternal();

		//System.Double UnityEngine.Audio.AudioClipPlayable::GetStartDelayInternal(UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Audio_AudioClipPlayable_GetStartDelayInternal();
		Register_UnityEngine_Audio_AudioClipPlayable_GetStartDelayInternal();

		//System.Void UnityEngine.Audio.AudioClipPlayable::SetPauseDelayInternal(UnityEngine.Playables.PlayableHandle&,System.Double)
		void Register_UnityEngine_Audio_AudioClipPlayable_SetPauseDelayInternal();
		Register_UnityEngine_Audio_AudioClipPlayable_SetPauseDelayInternal();

		//System.Void UnityEngine.Audio.AudioClipPlayable::SetStartDelayInternal(UnityEngine.Playables.PlayableHandle&,System.Double)
		void Register_UnityEngine_Audio_AudioClipPlayable_SetStartDelayInternal();
		Register_UnityEngine_Audio_AudioClipPlayable_SetStartDelayInternal();

		//UnityEngine.AudioClip UnityEngine.Audio.AudioClipPlayable::GetClipInternal(UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Audio_AudioClipPlayable_GetClipInternal();
		Register_UnityEngine_Audio_AudioClipPlayable_GetClipInternal();

	//End Registrations for type : UnityEngine.Audio.AudioClipPlayable

	//Start Registrations for type : UnityEngine.Audio.AudioMixerPlayable

		//System.Boolean UnityEngine.Audio.AudioMixerPlayable::CreateAudioMixerPlayableInternal(UnityEngine.Playables.PlayableGraph&,System.Int32,System.Boolean,UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Audio_AudioMixerPlayable_CreateAudioMixerPlayableInternal();
		Register_UnityEngine_Audio_AudioMixerPlayable_CreateAudioMixerPlayableInternal();

	//End Registrations for type : UnityEngine.Audio.AudioMixerPlayable

	//Start Registrations for type : UnityEngine.Audio.AudioPlayableGraphExtensions

		//System.Boolean UnityEngine.Audio.AudioPlayableGraphExtensions::InternalCreateAudioOutput(UnityEngine.Playables.PlayableGraph&,System.String,UnityEngine.Playables.PlayableOutputHandle&)
		void Register_UnityEngine_Audio_AudioPlayableGraphExtensions_InternalCreateAudioOutput();
		Register_UnityEngine_Audio_AudioPlayableGraphExtensions_InternalCreateAudioOutput();

	//End Registrations for type : UnityEngine.Audio.AudioPlayableGraphExtensions

	//Start Registrations for type : UnityEngine.Audio.AudioPlayableOutput

		//System.Void UnityEngine.Audio.AudioPlayableOutput::InternalSetTarget(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.AudioSource)
		void Register_UnityEngine_Audio_AudioPlayableOutput_InternalSetTarget();
		Register_UnityEngine_Audio_AudioPlayableOutput_InternalSetTarget();

		//UnityEngine.AudioSource UnityEngine.Audio.AudioPlayableOutput::InternalGetTarget(UnityEngine.Playables.PlayableOutputHandle&)
		void Register_UnityEngine_Audio_AudioPlayableOutput_InternalGetTarget();
		Register_UnityEngine_Audio_AudioPlayableOutput_InternalGetTarget();

	//End Registrations for type : UnityEngine.Audio.AudioPlayableOutput

	//Start Registrations for type : UnityEngine.AudioClip

		//System.Boolean UnityEngine.AudioClip::get_ambisonic()
		void Register_UnityEngine_AudioClip_get_ambisonic();
		Register_UnityEngine_AudioClip_get_ambisonic();

		//System.Int32 UnityEngine.AudioClip::get_frequency()
		void Register_UnityEngine_AudioClip_get_frequency();
		Register_UnityEngine_AudioClip_get_frequency();

		//System.Int32 UnityEngine.AudioClip::get_samples()
		void Register_UnityEngine_AudioClip_get_samples();
		Register_UnityEngine_AudioClip_get_samples();

		//System.Single UnityEngine.AudioClip::get_length()
		void Register_UnityEngine_AudioClip_get_length();
		Register_UnityEngine_AudioClip_get_length();

	//End Registrations for type : UnityEngine.AudioClip

	//Start Registrations for type : UnityEngine.AudioExtensionManager

		//UnityEngine.Object UnityEngine.AudioExtensionManager::GetAudioListener()
		void Register_UnityEngine_AudioExtensionManager_GetAudioListener();
		Register_UnityEngine_AudioExtensionManager_GetAudioListener();

	//End Registrations for type : UnityEngine.AudioExtensionManager

	//Start Registrations for type : UnityEngine.AudioListener

		//System.Int32 UnityEngine.AudioListener::GetNumExtensionProperties()
		void Register_UnityEngine_AudioListener_GetNumExtensionProperties();
		Register_UnityEngine_AudioListener_GetNumExtensionProperties();

		//System.Single UnityEngine.AudioListener::ReadExtensionPropertyValue(System.Int32)
		void Register_UnityEngine_AudioListener_ReadExtensionPropertyValue();
		Register_UnityEngine_AudioListener_ReadExtensionPropertyValue();

		//System.Void UnityEngine.AudioListener::GetOutputDataHelper(System.Single[],System.Int32)
		void Register_UnityEngine_AudioListener_GetOutputDataHelper();
		Register_UnityEngine_AudioListener_GetOutputDataHelper();

		//System.Void UnityEngine.AudioListener::INTERNAL_CALL_ClearExtensionProperties(UnityEngine.AudioListener,UnityEngine.PropertyName&)
		void Register_UnityEngine_AudioListener_INTERNAL_CALL_ClearExtensionProperties();
		Register_UnityEngine_AudioListener_INTERNAL_CALL_ClearExtensionProperties();

		//System.Void UnityEngine.AudioListener::INTERNAL_CALL_ReadExtensionName(UnityEngine.AudioListener,System.Int32,UnityEngine.PropertyName&)
		void Register_UnityEngine_AudioListener_INTERNAL_CALL_ReadExtensionName();
		Register_UnityEngine_AudioListener_INTERNAL_CALL_ReadExtensionName();

		//System.Void UnityEngine.AudioListener::INTERNAL_CALL_ReadExtensionPropertyName(UnityEngine.AudioListener,System.Int32,UnityEngine.PropertyName&)
		void Register_UnityEngine_AudioListener_INTERNAL_CALL_ReadExtensionPropertyName();
		Register_UnityEngine_AudioListener_INTERNAL_CALL_ReadExtensionPropertyName();

	//End Registrations for type : UnityEngine.AudioListener

	//Start Registrations for type : UnityEngine.AudioSettings

		//System.Int32 UnityEngine.AudioSettings::get_outputSampleRate()
		void Register_UnityEngine_AudioSettings_get_outputSampleRate();
		Register_UnityEngine_AudioSettings_get_outputSampleRate();

		//System.String UnityEngine.AudioSettings::GetAmbisonicDecoderPluginName()
		void Register_UnityEngine_AudioSettings_GetAmbisonicDecoderPluginName();
		Register_UnityEngine_AudioSettings_GetAmbisonicDecoderPluginName();

		//System.String UnityEngine.AudioSettings::GetSpatializerPluginName()
		void Register_UnityEngine_AudioSettings_GetSpatializerPluginName();
		Register_UnityEngine_AudioSettings_GetSpatializerPluginName();

	//End Registrations for type : UnityEngine.AudioSettings

	//Start Registrations for type : UnityEngine.AudioSource

		//System.Boolean UnityEngine.AudioSource::get_isPlaying()
		void Register_UnityEngine_AudioSource_get_isPlaying();
		Register_UnityEngine_AudioSource_get_isPlaying();

		//System.Boolean UnityEngine.AudioSource::get_spatializeInternal()
		void Register_UnityEngine_AudioSource_get_spatializeInternal();
		Register_UnityEngine_AudioSource_get_spatializeInternal();

		//System.Int32 UnityEngine.AudioSource::GetNumExtensionProperties()
		void Register_UnityEngine_AudioSource_GetNumExtensionProperties();
		Register_UnityEngine_AudioSource_GetNumExtensionProperties();

		//System.Single UnityEngine.AudioSource::ReadExtensionPropertyValue(System.Int32)
		void Register_UnityEngine_AudioSource_ReadExtensionPropertyValue();
		Register_UnityEngine_AudioSource_ReadExtensionPropertyValue();

		//System.Single UnityEngine.AudioSource::get_volume()
		void Register_UnityEngine_AudioSource_get_volume();
		Register_UnityEngine_AudioSource_get_volume();

		//System.Void UnityEngine.AudioSource::INTERNAL_CALL_ClearExtensionProperties(UnityEngine.AudioSource,UnityEngine.PropertyName&)
		void Register_UnityEngine_AudioSource_INTERNAL_CALL_ClearExtensionProperties();
		Register_UnityEngine_AudioSource_INTERNAL_CALL_ClearExtensionProperties();

		//System.Void UnityEngine.AudioSource::INTERNAL_CALL_ReadExtensionName(UnityEngine.AudioSource,System.Int32,UnityEngine.PropertyName&)
		void Register_UnityEngine_AudioSource_INTERNAL_CALL_ReadExtensionName();
		Register_UnityEngine_AudioSource_INTERNAL_CALL_ReadExtensionName();

		//System.Void UnityEngine.AudioSource::INTERNAL_CALL_ReadExtensionPropertyName(UnityEngine.AudioSource,System.Int32,UnityEngine.PropertyName&)
		void Register_UnityEngine_AudioSource_INTERNAL_CALL_ReadExtensionPropertyName();
		Register_UnityEngine_AudioSource_INTERNAL_CALL_ReadExtensionPropertyName();

		//System.Void UnityEngine.AudioSource::Play(System.UInt64)
		void Register_UnityEngine_AudioSource_Play();
		Register_UnityEngine_AudioSource_Play();

		//System.Void UnityEngine.AudioSource::PlayOneShotHelper(UnityEngine.AudioClip,System.Single)
		void Register_UnityEngine_AudioSource_PlayOneShotHelper();
		Register_UnityEngine_AudioSource_PlayOneShotHelper();

		//System.Void UnityEngine.AudioSource::Stop()
		void Register_UnityEngine_AudioSource_Stop();
		Register_UnityEngine_AudioSource_Stop();

		//System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
		void Register_UnityEngine_AudioSource_set_clip();
		Register_UnityEngine_AudioSource_set_clip();

		//System.Void UnityEngine.AudioSource::set_loop(System.Boolean)
		void Register_UnityEngine_AudioSource_set_loop();
		Register_UnityEngine_AudioSource_set_loop();

		//System.Void UnityEngine.AudioSource::set_playOnAwake(System.Boolean)
		void Register_UnityEngine_AudioSource_set_playOnAwake();
		Register_UnityEngine_AudioSource_set_playOnAwake();

		//System.Void UnityEngine.AudioSource::set_volume(System.Single)
		void Register_UnityEngine_AudioSource_set_volume();
		Register_UnityEngine_AudioSource_set_volume();

		//UnityEngine.AudioClip UnityEngine.AudioSource::get_clip()
		void Register_UnityEngine_AudioSource_get_clip();
		Register_UnityEngine_AudioSource_get_clip();

	//End Registrations for type : UnityEngine.AudioSource

	//Start Registrations for type : UnityEngine.Behaviour

		//System.Boolean UnityEngine.Behaviour::get_enabled()
		void Register_UnityEngine_Behaviour_get_enabled();
		Register_UnityEngine_Behaviour_get_enabled();

		//System.Boolean UnityEngine.Behaviour::get_isActiveAndEnabled()
		void Register_UnityEngine_Behaviour_get_isActiveAndEnabled();
		Register_UnityEngine_Behaviour_get_isActiveAndEnabled();

		//System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
		void Register_UnityEngine_Behaviour_set_enabled();
		Register_UnityEngine_Behaviour_set_enabled();

	//End Registrations for type : UnityEngine.Behaviour

	//Start Registrations for type : UnityEngine.Bounds

		//System.Boolean UnityEngine.Bounds::Contains_Injected(UnityEngine.Bounds&,UnityEngine.Vector3&)
		void Register_UnityEngine_Bounds_Contains_Injected();
		Register_UnityEngine_Bounds_Contains_Injected();

	//End Registrations for type : UnityEngine.Bounds

	//Start Registrations for type : UnityEngine.Camera

		//System.Boolean UnityEngine.Camera::get_allowHDR()
		void Register_UnityEngine_Camera_get_allowHDR();
		Register_UnityEngine_Camera_get_allowHDR();

		//System.Boolean UnityEngine.Camera::get_orthographic()
		void Register_UnityEngine_Camera_get_orthographic();
		Register_UnityEngine_Camera_get_orthographic();

		//System.Int32 UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])
		void Register_UnityEngine_Camera_GetAllCameras();
		Register_UnityEngine_Camera_GetAllCameras();

		//System.Int32 UnityEngine.Camera::get_allCamerasCount()
		void Register_UnityEngine_Camera_get_allCamerasCount();
		Register_UnityEngine_Camera_get_allCamerasCount();

		//System.Int32 UnityEngine.Camera::get_cullingMask()
		void Register_UnityEngine_Camera_get_cullingMask();
		Register_UnityEngine_Camera_get_cullingMask();

		//System.Int32 UnityEngine.Camera::get_eventMask()
		void Register_UnityEngine_Camera_get_eventMask();
		Register_UnityEngine_Camera_get_eventMask();

		//System.Int32 UnityEngine.Camera::get_pixelHeight()
		void Register_UnityEngine_Camera_get_pixelHeight();
		Register_UnityEngine_Camera_get_pixelHeight();

		//System.Int32 UnityEngine.Camera::get_pixelWidth()
		void Register_UnityEngine_Camera_get_pixelWidth();
		Register_UnityEngine_Camera_get_pixelWidth();

		//System.Int32 UnityEngine.Camera::get_targetDisplay()
		void Register_UnityEngine_Camera_get_targetDisplay();
		Register_UnityEngine_Camera_get_targetDisplay();

		//System.Single UnityEngine.Camera::get_aspect()
		void Register_UnityEngine_Camera_get_aspect();
		Register_UnityEngine_Camera_get_aspect();

		//System.Single UnityEngine.Camera::get_depth()
		void Register_UnityEngine_Camera_get_depth();
		Register_UnityEngine_Camera_get_depth();

		//System.Single UnityEngine.Camera::get_farClipPlane()
		void Register_UnityEngine_Camera_get_farClipPlane();
		Register_UnityEngine_Camera_get_farClipPlane();

		//System.Single UnityEngine.Camera::get_fieldOfView()
		void Register_UnityEngine_Camera_get_fieldOfView();
		Register_UnityEngine_Camera_get_fieldOfView();

		//System.Single UnityEngine.Camera::get_nearClipPlane()
		void Register_UnityEngine_Camera_get_nearClipPlane();
		Register_UnityEngine_Camera_get_nearClipPlane();

		//System.Single UnityEngine.Camera::get_orthographicSize()
		void Register_UnityEngine_Camera_get_orthographicSize();
		Register_UnityEngine_Camera_get_orthographicSize();

		//System.Void UnityEngine.Camera::AddCommandBufferImpl(UnityEngine.Rendering.CameraEvent,UnityEngine.Rendering.CommandBuffer)
		void Register_UnityEngine_Camera_AddCommandBufferImpl();
		Register_UnityEngine_Camera_AddCommandBufferImpl();

		//System.Void UnityEngine.Camera::RemoveCommandBufferImpl(UnityEngine.Rendering.CameraEvent,UnityEngine.Rendering.CommandBuffer)
		void Register_UnityEngine_Camera_RemoveCommandBufferImpl();
		Register_UnityEngine_Camera_RemoveCommandBufferImpl();

		//System.Void UnityEngine.Camera::ResetProjectionMatrix()
		void Register_UnityEngine_Camera_ResetProjectionMatrix();
		Register_UnityEngine_Camera_ResetProjectionMatrix();

		//System.Void UnityEngine.Camera::ScreenPointToRay_Injected(UnityEngine.Vector2&,UnityEngine.Ray&)
		void Register_UnityEngine_Camera_ScreenPointToRay_Injected();
		Register_UnityEngine_Camera_ScreenPointToRay_Injected();

		//System.Void UnityEngine.Camera::ScreenToViewportPoint_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)
		void Register_UnityEngine_Camera_ScreenToViewportPoint_Injected();
		Register_UnityEngine_Camera_ScreenToViewportPoint_Injected();

		//System.Void UnityEngine.Camera::ScreenToWorldPoint_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)
		void Register_UnityEngine_Camera_ScreenToWorldPoint_Injected();
		Register_UnityEngine_Camera_ScreenToWorldPoint_Injected();

		//System.Void UnityEngine.Camera::WorldToScreenPoint_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&)
		void Register_UnityEngine_Camera_WorldToScreenPoint_Injected();
		Register_UnityEngine_Camera_WorldToScreenPoint_Injected();

		//System.Void UnityEngine.Camera::get_pixelRect_Injected(UnityEngine.Rect&)
		void Register_UnityEngine_Camera_get_pixelRect_Injected();
		Register_UnityEngine_Camera_get_pixelRect_Injected();

		//System.Void UnityEngine.Camera::get_projectionMatrix_Injected(UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Camera_get_projectionMatrix_Injected();
		Register_UnityEngine_Camera_get_projectionMatrix_Injected();

		//System.Void UnityEngine.Camera::get_rect_Injected(UnityEngine.Rect&)
		void Register_UnityEngine_Camera_get_rect_Injected();
		Register_UnityEngine_Camera_get_rect_Injected();

		//System.Void UnityEngine.Camera::get_worldToCameraMatrix_Injected(UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Camera_get_worldToCameraMatrix_Injected();
		Register_UnityEngine_Camera_get_worldToCameraMatrix_Injected();

		//System.Void UnityEngine.Camera::set_allowHDR(System.Boolean)
		void Register_UnityEngine_Camera_set_allowHDR();
		Register_UnityEngine_Camera_set_allowHDR();

		//System.Void UnityEngine.Camera::set_depthTextureMode(UnityEngine.DepthTextureMode)
		void Register_UnityEngine_Camera_set_depthTextureMode();
		Register_UnityEngine_Camera_set_depthTextureMode();

		//System.Void UnityEngine.Camera::set_fieldOfView(System.Single)
		void Register_UnityEngine_Camera_set_fieldOfView();
		Register_UnityEngine_Camera_set_fieldOfView();

		//System.Void UnityEngine.Camera::set_nonJitteredProjectionMatrix_Injected(UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Camera_set_nonJitteredProjectionMatrix_Injected();
		Register_UnityEngine_Camera_set_nonJitteredProjectionMatrix_Injected();

		//System.Void UnityEngine.Camera::set_projectionMatrix_Injected(UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Camera_set_projectionMatrix_Injected();
		Register_UnityEngine_Camera_set_projectionMatrix_Injected();

		//System.Void UnityEngine.Camera::set_rect_Injected(UnityEngine.Rect&)
		void Register_UnityEngine_Camera_set_rect_Injected();
		Register_UnityEngine_Camera_set_rect_Injected();

		//System.Void UnityEngine.Camera::set_useJitteredProjectionMatrixForTransparentRendering(System.Boolean)
		void Register_UnityEngine_Camera_set_useJitteredProjectionMatrixForTransparentRendering();
		Register_UnityEngine_Camera_set_useJitteredProjectionMatrixForTransparentRendering();

		//UnityEngine.Camera UnityEngine.Camera::get_main()
		void Register_UnityEngine_Camera_get_main();
		Register_UnityEngine_Camera_get_main();

		//UnityEngine.CameraClearFlags UnityEngine.Camera::get_clearFlags()
		void Register_UnityEngine_Camera_get_clearFlags();
		Register_UnityEngine_Camera_get_clearFlags();

		//UnityEngine.DepthTextureMode UnityEngine.Camera::get_depthTextureMode()
		void Register_UnityEngine_Camera_get_depthTextureMode();
		Register_UnityEngine_Camera_get_depthTextureMode();

		//UnityEngine.GameObject UnityEngine.Camera::RaycastTry2D_Injected(UnityEngine.Ray&,System.Single,System.Int32)
		void Register_UnityEngine_Camera_RaycastTry2D_Injected();
		Register_UnityEngine_Camera_RaycastTry2D_Injected();

		//UnityEngine.GameObject UnityEngine.Camera::RaycastTry_Injected(UnityEngine.Ray&,System.Single,System.Int32)
		void Register_UnityEngine_Camera_RaycastTry_Injected();
		Register_UnityEngine_Camera_RaycastTry_Injected();

		//UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
		void Register_UnityEngine_Camera_get_targetTexture();
		Register_UnityEngine_Camera_get_targetTexture();

		//UnityEngine.RenderingPath UnityEngine.Camera::get_actualRenderingPath()
		void Register_UnityEngine_Camera_get_actualRenderingPath();
		Register_UnityEngine_Camera_get_actualRenderingPath();

	//End Registrations for type : UnityEngine.Camera

	//Start Registrations for type : UnityEngine.Canvas

		//System.Boolean UnityEngine.Canvas::get_isRootCanvas()
		void Register_UnityEngine_Canvas_get_isRootCanvas();
		Register_UnityEngine_Canvas_get_isRootCanvas();

		//System.Boolean UnityEngine.Canvas::get_overrideSorting()
		void Register_UnityEngine_Canvas_get_overrideSorting();
		Register_UnityEngine_Canvas_get_overrideSorting();

		//System.Boolean UnityEngine.Canvas::get_pixelPerfect()
		void Register_UnityEngine_Canvas_get_pixelPerfect();
		Register_UnityEngine_Canvas_get_pixelPerfect();

		//System.Int32 UnityEngine.Canvas::get_renderOrder()
		void Register_UnityEngine_Canvas_get_renderOrder();
		Register_UnityEngine_Canvas_get_renderOrder();

		//System.Int32 UnityEngine.Canvas::get_sortingLayerID()
		void Register_UnityEngine_Canvas_get_sortingLayerID();
		Register_UnityEngine_Canvas_get_sortingLayerID();

		//System.Int32 UnityEngine.Canvas::get_sortingOrder()
		void Register_UnityEngine_Canvas_get_sortingOrder();
		Register_UnityEngine_Canvas_get_sortingOrder();

		//System.Int32 UnityEngine.Canvas::get_targetDisplay()
		void Register_UnityEngine_Canvas_get_targetDisplay();
		Register_UnityEngine_Canvas_get_targetDisplay();

		//System.Single UnityEngine.Canvas::get_referencePixelsPerUnit()
		void Register_UnityEngine_Canvas_get_referencePixelsPerUnit();
		Register_UnityEngine_Canvas_get_referencePixelsPerUnit();

		//System.Single UnityEngine.Canvas::get_scaleFactor()
		void Register_UnityEngine_Canvas_get_scaleFactor();
		Register_UnityEngine_Canvas_get_scaleFactor();

		//System.Void UnityEngine.Canvas::set_overrideSorting(System.Boolean)
		void Register_UnityEngine_Canvas_set_overrideSorting();
		Register_UnityEngine_Canvas_set_overrideSorting();

		//System.Void UnityEngine.Canvas::set_referencePixelsPerUnit(System.Single)
		void Register_UnityEngine_Canvas_set_referencePixelsPerUnit();
		Register_UnityEngine_Canvas_set_referencePixelsPerUnit();

		//System.Void UnityEngine.Canvas::set_scaleFactor(System.Single)
		void Register_UnityEngine_Canvas_set_scaleFactor();
		Register_UnityEngine_Canvas_set_scaleFactor();

		//System.Void UnityEngine.Canvas::set_sortingLayerID(System.Int32)
		void Register_UnityEngine_Canvas_set_sortingLayerID();
		Register_UnityEngine_Canvas_set_sortingLayerID();

		//System.Void UnityEngine.Canvas::set_sortingOrder(System.Int32)
		void Register_UnityEngine_Canvas_set_sortingOrder();
		Register_UnityEngine_Canvas_set_sortingOrder();

		//UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
		void Register_UnityEngine_Canvas_get_worldCamera();
		Register_UnityEngine_Canvas_get_worldCamera();

		//UnityEngine.Canvas UnityEngine.Canvas::get_rootCanvas()
		void Register_UnityEngine_Canvas_get_rootCanvas();
		Register_UnityEngine_Canvas_get_rootCanvas();

		//UnityEngine.Material UnityEngine.Canvas::GetDefaultCanvasMaterial()
		void Register_UnityEngine_Canvas_GetDefaultCanvasMaterial();
		Register_UnityEngine_Canvas_GetDefaultCanvasMaterial();

		//UnityEngine.Material UnityEngine.Canvas::GetETC1SupportedCanvasMaterial()
		void Register_UnityEngine_Canvas_GetETC1SupportedCanvasMaterial();
		Register_UnityEngine_Canvas_GetETC1SupportedCanvasMaterial();

		//UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
		void Register_UnityEngine_Canvas_get_renderMode();
		Register_UnityEngine_Canvas_get_renderMode();

	//End Registrations for type : UnityEngine.Canvas

	//Start Registrations for type : UnityEngine.CanvasGroup

		//System.Boolean UnityEngine.CanvasGroup::get_blocksRaycasts()
		void Register_UnityEngine_CanvasGroup_get_blocksRaycasts();
		Register_UnityEngine_CanvasGroup_get_blocksRaycasts();

		//System.Boolean UnityEngine.CanvasGroup::get_ignoreParentGroups()
		void Register_UnityEngine_CanvasGroup_get_ignoreParentGroups();
		Register_UnityEngine_CanvasGroup_get_ignoreParentGroups();

		//System.Boolean UnityEngine.CanvasGroup::get_interactable()
		void Register_UnityEngine_CanvasGroup_get_interactable();
		Register_UnityEngine_CanvasGroup_get_interactable();

		//System.Single UnityEngine.CanvasGroup::get_alpha()
		void Register_UnityEngine_CanvasGroup_get_alpha();
		Register_UnityEngine_CanvasGroup_get_alpha();

		//System.Void UnityEngine.CanvasGroup::set_alpha(System.Single)
		void Register_UnityEngine_CanvasGroup_set_alpha();
		Register_UnityEngine_CanvasGroup_set_alpha();

	//End Registrations for type : UnityEngine.CanvasGroup

	//Start Registrations for type : UnityEngine.CanvasRenderer

		//System.Boolean UnityEngine.CanvasRenderer::get_cull()
		void Register_UnityEngine_CanvasRenderer_get_cull();
		Register_UnityEngine_CanvasRenderer_get_cull();

		//System.Boolean UnityEngine.CanvasRenderer::get_hasMoved()
		void Register_UnityEngine_CanvasRenderer_get_hasMoved();
		Register_UnityEngine_CanvasRenderer_get_hasMoved();

		//System.Int32 UnityEngine.CanvasRenderer::get_absoluteDepth()
		void Register_UnityEngine_CanvasRenderer_get_absoluteDepth();
		Register_UnityEngine_CanvasRenderer_get_absoluteDepth();

		//System.Int32 UnityEngine.CanvasRenderer::get_materialCount()
		void Register_UnityEngine_CanvasRenderer_get_materialCount();
		Register_UnityEngine_CanvasRenderer_get_materialCount();

		//System.Void UnityEngine.CanvasRenderer::Clear()
		void Register_UnityEngine_CanvasRenderer_Clear();
		Register_UnityEngine_CanvasRenderer_Clear();

		//System.Void UnityEngine.CanvasRenderer::CreateUIVertexStreamInternal(System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object)
		void Register_UnityEngine_CanvasRenderer_CreateUIVertexStreamInternal();
		Register_UnityEngine_CanvasRenderer_CreateUIVertexStreamInternal();

		//System.Void UnityEngine.CanvasRenderer::DisableRectClipping()
		void Register_UnityEngine_CanvasRenderer_DisableRectClipping();
		Register_UnityEngine_CanvasRenderer_DisableRectClipping();

		//System.Void UnityEngine.CanvasRenderer::INTERNAL_CALL_EnableRectClipping(UnityEngine.CanvasRenderer,UnityEngine.Rect&)
		void Register_UnityEngine_CanvasRenderer_INTERNAL_CALL_EnableRectClipping();
		Register_UnityEngine_CanvasRenderer_INTERNAL_CALL_EnableRectClipping();

		//System.Void UnityEngine.CanvasRenderer::INTERNAL_CALL_GetColor(UnityEngine.CanvasRenderer,UnityEngine.Color&)
		void Register_UnityEngine_CanvasRenderer_INTERNAL_CALL_GetColor();
		Register_UnityEngine_CanvasRenderer_INTERNAL_CALL_GetColor();

		//System.Void UnityEngine.CanvasRenderer::INTERNAL_CALL_SetColor(UnityEngine.CanvasRenderer,UnityEngine.Color&)
		void Register_UnityEngine_CanvasRenderer_INTERNAL_CALL_SetColor();
		Register_UnityEngine_CanvasRenderer_INTERNAL_CALL_SetColor();

		//System.Void UnityEngine.CanvasRenderer::SetAlphaTexture(UnityEngine.Texture)
		void Register_UnityEngine_CanvasRenderer_SetAlphaTexture();
		Register_UnityEngine_CanvasRenderer_SetAlphaTexture();

		//System.Void UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,System.Int32)
		void Register_UnityEngine_CanvasRenderer_SetMaterial();
		Register_UnityEngine_CanvasRenderer_SetMaterial();

		//System.Void UnityEngine.CanvasRenderer::SetMesh(UnityEngine.Mesh)
		void Register_UnityEngine_CanvasRenderer_SetMesh();
		Register_UnityEngine_CanvasRenderer_SetMesh();

		//System.Void UnityEngine.CanvasRenderer::SetPopMaterial(UnityEngine.Material,System.Int32)
		void Register_UnityEngine_CanvasRenderer_SetPopMaterial();
		Register_UnityEngine_CanvasRenderer_SetPopMaterial();

		//System.Void UnityEngine.CanvasRenderer::SetTexture(UnityEngine.Texture)
		void Register_UnityEngine_CanvasRenderer_SetTexture();
		Register_UnityEngine_CanvasRenderer_SetTexture();

		//System.Void UnityEngine.CanvasRenderer::SplitIndicesStreamsInternal(System.Object,System.Object)
		void Register_UnityEngine_CanvasRenderer_SplitIndicesStreamsInternal();
		Register_UnityEngine_CanvasRenderer_SplitIndicesStreamsInternal();

		//System.Void UnityEngine.CanvasRenderer::SplitUIVertexStreamsInternal(System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object,System.Object)
		void Register_UnityEngine_CanvasRenderer_SplitUIVertexStreamsInternal();
		Register_UnityEngine_CanvasRenderer_SplitUIVertexStreamsInternal();

		//System.Void UnityEngine.CanvasRenderer::set_cull(System.Boolean)
		void Register_UnityEngine_CanvasRenderer_set_cull();
		Register_UnityEngine_CanvasRenderer_set_cull();

		//System.Void UnityEngine.CanvasRenderer::set_hasPopInstruction(System.Boolean)
		void Register_UnityEngine_CanvasRenderer_set_hasPopInstruction();
		Register_UnityEngine_CanvasRenderer_set_hasPopInstruction();

		//System.Void UnityEngine.CanvasRenderer::set_materialCount(System.Int32)
		void Register_UnityEngine_CanvasRenderer_set_materialCount();
		Register_UnityEngine_CanvasRenderer_set_materialCount();

		//System.Void UnityEngine.CanvasRenderer::set_popMaterialCount(System.Int32)
		void Register_UnityEngine_CanvasRenderer_set_popMaterialCount();
		Register_UnityEngine_CanvasRenderer_set_popMaterialCount();

	//End Registrations for type : UnityEngine.CanvasRenderer

	//Start Registrations for type : UnityEngine.Collider

		//System.Boolean UnityEngine.Collider::get_isTrigger()
		void Register_UnityEngine_Collider_get_isTrigger();
		Register_UnityEngine_Collider_get_isTrigger();

		//System.Void UnityEngine.Collider::INTERNAL_get_bounds(UnityEngine.Bounds&)
		void Register_UnityEngine_Collider_INTERNAL_get_bounds();
		Register_UnityEngine_Collider_INTERNAL_get_bounds();

		//System.Void UnityEngine.Collider::set_enabled(System.Boolean)
		void Register_UnityEngine_Collider_set_enabled();
		Register_UnityEngine_Collider_set_enabled();

		//System.Void UnityEngine.Collider::set_isTrigger(System.Boolean)
		void Register_UnityEngine_Collider_set_isTrigger();
		Register_UnityEngine_Collider_set_isTrigger();

	//End Registrations for type : UnityEngine.Collider

	//Start Registrations for type : UnityEngine.Component

		//System.Void UnityEngine.Component::GetComponentFastPath(System.Type,System.IntPtr)
		void Register_UnityEngine_Component_GetComponentFastPath();
		Register_UnityEngine_Component_GetComponentFastPath();

		//System.Void UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Object)
		void Register_UnityEngine_Component_GetComponentsForListInternal();
		Register_UnityEngine_Component_GetComponentsForListInternal();

		//UnityEngine.GameObject UnityEngine.Component::get_gameObject()
		void Register_UnityEngine_Component_get_gameObject();
		Register_UnityEngine_Component_get_gameObject();

		//UnityEngine.Transform UnityEngine.Component::get_transform()
		void Register_UnityEngine_Component_get_transform();
		Register_UnityEngine_Component_get_transform();

	//End Registrations for type : UnityEngine.Component

	//Start Registrations for type : UnityEngine.ComputeBuffer

		//System.Void UnityEngine.ComputeBuffer::DestroyBuffer(UnityEngine.ComputeBuffer)
		void Register_UnityEngine_ComputeBuffer_DestroyBuffer();
		Register_UnityEngine_ComputeBuffer_DestroyBuffer();

		//System.Void UnityEngine.ComputeBuffer::InitBuffer(UnityEngine.ComputeBuffer,System.Int32,System.Int32,UnityEngine.ComputeBufferType)
		void Register_UnityEngine_ComputeBuffer_InitBuffer();
		Register_UnityEngine_ComputeBuffer_InitBuffer();

		//System.Void UnityEngine.ComputeBuffer::InternalSetData(System.Array,System.Int32,System.Int32,System.Int32,System.Int32)
		void Register_UnityEngine_ComputeBuffer_InternalSetData();
		Register_UnityEngine_ComputeBuffer_InternalSetData();

	//End Registrations for type : UnityEngine.ComputeBuffer

	//Start Registrations for type : UnityEngine.ComputeShader

		//System.Int32 UnityEngine.ComputeShader::FindKernel(System.String)
		void Register_UnityEngine_ComputeShader_FindKernel();
		Register_UnityEngine_ComputeShader_FindKernel();

		//System.Void UnityEngine.ComputeShader::Dispatch(System.Int32,System.Int32,System.Int32,System.Int32)
		void Register_UnityEngine_ComputeShader_Dispatch();
		Register_UnityEngine_ComputeShader_Dispatch();

		//System.Void UnityEngine.ComputeShader::INTERNAL_CALL_SetVector(UnityEngine.ComputeShader,System.Int32,UnityEngine.Vector4&)
		void Register_UnityEngine_ComputeShader_INTERNAL_CALL_SetVector();
		Register_UnityEngine_ComputeShader_INTERNAL_CALL_SetVector();

		//System.Void UnityEngine.ComputeShader::SetBuffer(System.Int32,System.Int32,UnityEngine.ComputeBuffer)
		void Register_UnityEngine_ComputeShader_SetBuffer();
		Register_UnityEngine_ComputeShader_SetBuffer();

		//System.Void UnityEngine.ComputeShader::SetTexture(System.Int32,System.Int32,UnityEngine.Texture)
		void Register_UnityEngine_ComputeShader_SetTexture();
		Register_UnityEngine_ComputeShader_SetTexture();

	//End Registrations for type : UnityEngine.ComputeShader

	//Start Registrations for type : UnityEngine.Coroutine

		//System.Void UnityEngine.Coroutine::ReleaseCoroutine(System.IntPtr)
		void Register_UnityEngine_Coroutine_ReleaseCoroutine();
		Register_UnityEngine_Coroutine_ReleaseCoroutine();

	//End Registrations for type : UnityEngine.Coroutine

	//Start Registrations for type : UnityEngine.CullingGroup

		//System.Void UnityEngine.CullingGroup::Dispose()
		void Register_UnityEngine_CullingGroup_Dispose();
		Register_UnityEngine_CullingGroup_Dispose();

		//System.Void UnityEngine.CullingGroup::FinalizerFailure()
		void Register_UnityEngine_CullingGroup_FinalizerFailure();
		Register_UnityEngine_CullingGroup_FinalizerFailure();

	//End Registrations for type : UnityEngine.CullingGroup

	//Start Registrations for type : UnityEngine.Cursor

		//UnityEngine.CursorLockMode UnityEngine.Cursor::get_lockState()
		void Register_UnityEngine_Cursor_get_lockState();
		Register_UnityEngine_Cursor_get_lockState();

	//End Registrations for type : UnityEngine.Cursor

	//Start Registrations for type : UnityEngine.DebugLogHandler

		//System.Void UnityEngine.DebugLogHandler::Internal_Log(UnityEngine.LogType,System.String,UnityEngine.Object)
		void Register_UnityEngine_DebugLogHandler_Internal_Log();
		Register_UnityEngine_DebugLogHandler_Internal_Log();

		//System.Void UnityEngine.DebugLogHandler::Internal_LogException(System.Exception,UnityEngine.Object)
		void Register_UnityEngine_DebugLogHandler_Internal_LogException();
		Register_UnityEngine_DebugLogHandler_Internal_LogException();

	//End Registrations for type : UnityEngine.DebugLogHandler

	//Start Registrations for type : UnityEngine.Display

		//System.Int32 UnityEngine.Display::RelativeMouseAtImpl(System.Int32,System.Int32,System.Int32&,System.Int32&)
		void Register_UnityEngine_Display_RelativeMouseAtImpl();
		Register_UnityEngine_Display_RelativeMouseAtImpl();

		//System.Void UnityEngine.Display::GetRenderingExtImpl(System.IntPtr,System.Int32&,System.Int32&)
		void Register_UnityEngine_Display_GetRenderingExtImpl();
		Register_UnityEngine_Display_GetRenderingExtImpl();

		//System.Void UnityEngine.Display::GetSystemExtImpl(System.IntPtr,System.Int32&,System.Int32&)
		void Register_UnityEngine_Display_GetSystemExtImpl();
		Register_UnityEngine_Display_GetSystemExtImpl();

	//End Registrations for type : UnityEngine.Display

	//Start Registrations for type : UnityEngine.Event

		//System.Boolean UnityEngine.Event::PopEvent(UnityEngine.Event)
		void Register_UnityEngine_Event_PopEvent();
		Register_UnityEngine_Event_PopEvent();

		//System.Char UnityEngine.Event::get_character()
		void Register_UnityEngine_Event_get_character();
		Register_UnityEngine_Event_get_character();

		//System.String UnityEngine.Event::get_commandName()
		void Register_UnityEngine_Event_get_commandName();
		Register_UnityEngine_Event_get_commandName();

		//System.Void UnityEngine.Event::Cleanup()
		void Register_UnityEngine_Event_Cleanup();
		Register_UnityEngine_Event_Cleanup();

		//System.Void UnityEngine.Event::Init(System.Int32)
		void Register_UnityEngine_Event_Init();
		Register_UnityEngine_Event_Init();

		//System.Void UnityEngine.Event::Internal_GetMousePosition(UnityEngine.Vector2&)
		void Register_UnityEngine_Event_Internal_GetMousePosition();
		Register_UnityEngine_Event_Internal_GetMousePosition();

		//System.Void UnityEngine.Event::Internal_SetNativeEvent(System.IntPtr)
		void Register_UnityEngine_Event_Internal_SetNativeEvent();
		Register_UnityEngine_Event_Internal_SetNativeEvent();

		//System.Void UnityEngine.Event::set_displayIndex(System.Int32)
		void Register_UnityEngine_Event_set_displayIndex();
		Register_UnityEngine_Event_set_displayIndex();

		//UnityEngine.EventModifiers UnityEngine.Event::get_modifiers()
		void Register_UnityEngine_Event_get_modifiers();
		Register_UnityEngine_Event_get_modifiers();

		//UnityEngine.EventType UnityEngine.Event::get_rawType()
		void Register_UnityEngine_Event_get_rawType();
		Register_UnityEngine_Event_get_rawType();

		//UnityEngine.EventType UnityEngine.Event::get_type()
		void Register_UnityEngine_Event_get_type();
		Register_UnityEngine_Event_get_type();

		//UnityEngine.KeyCode UnityEngine.Event::get_keyCode()
		void Register_UnityEngine_Event_get_keyCode();
		Register_UnityEngine_Event_get_keyCode();

	//End Registrations for type : UnityEngine.Event

	//Start Registrations for type : UnityEngine.Experimental.Audio.AudioSampleProvider

		//System.Void UnityEngine.Experimental.Audio.AudioSampleProvider::InternalSetScriptingPtr(System.UInt32,UnityEngine.Experimental.Audio.AudioSampleProvider)
		void Register_UnityEngine_Experimental_Audio_AudioSampleProvider_InternalSetScriptingPtr();
		Register_UnityEngine_Experimental_Audio_AudioSampleProvider_InternalSetScriptingPtr();

	//End Registrations for type : UnityEngine.Experimental.Audio.AudioSampleProvider

	//Start Registrations for type : UnityEngine.Experimental.Subsystem

		//System.Void UnityEngine.Experimental.Subsystem::SetHandle(UnityEngine.Experimental.Subsystem)
		void Register_UnityEngine_Experimental_Subsystem_SetHandle();
		Register_UnityEngine_Experimental_Subsystem_SetHandle();

	//End Registrations for type : UnityEngine.Experimental.Subsystem

	//Start Registrations for type : UnityEngine.Font

		//System.Boolean UnityEngine.Font::HasCharacter(System.Char)
		void Register_UnityEngine_Font_HasCharacter();
		Register_UnityEngine_Font_HasCharacter();

		//System.Boolean UnityEngine.Font::get_dynamic()
		void Register_UnityEngine_Font_get_dynamic();
		Register_UnityEngine_Font_get_dynamic();

		//System.Int32 UnityEngine.Font::get_fontSize()
		void Register_UnityEngine_Font_get_fontSize();
		Register_UnityEngine_Font_get_fontSize();

		//UnityEngine.Material UnityEngine.Font::get_material()
		void Register_UnityEngine_Font_get_material();
		Register_UnityEngine_Font_get_material();

	//End Registrations for type : UnityEngine.Font

	//Start Registrations for type : UnityEngine.GameObject

		//System.Array UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Object)
		void Register_UnityEngine_GameObject_GetComponentsInternal();
		Register_UnityEngine_GameObject_GetComponentsInternal();

		//System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
		void Register_UnityEngine_GameObject_get_activeInHierarchy();
		Register_UnityEngine_GameObject_get_activeInHierarchy();

		//System.Boolean UnityEngine.GameObject::get_activeSelf()
		void Register_UnityEngine_GameObject_get_activeSelf();
		Register_UnityEngine_GameObject_get_activeSelf();

		//System.Int32 UnityEngine.GameObject::get_layer()
		void Register_UnityEngine_GameObject_get_layer();
		Register_UnityEngine_GameObject_get_layer();

		//System.String UnityEngine.GameObject::get_tag()
		void Register_UnityEngine_GameObject_get_tag();
		Register_UnityEngine_GameObject_get_tag();

		//System.Void UnityEngine.GameObject::GetComponentFastPath(System.Type,System.IntPtr)
		void Register_UnityEngine_GameObject_GetComponentFastPath();
		Register_UnityEngine_GameObject_GetComponentFastPath();

		//System.Void UnityEngine.GameObject::Internal_CreateGameObject(UnityEngine.GameObject,System.String)
		void Register_UnityEngine_GameObject_Internal_CreateGameObject();
		Register_UnityEngine_GameObject_Internal_CreateGameObject();

		//System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
		void Register_UnityEngine_GameObject_SendMessage();
		Register_UnityEngine_GameObject_SendMessage();

		//System.Void UnityEngine.GameObject::SetActive(System.Boolean)
		void Register_UnityEngine_GameObject_SetActive();
		Register_UnityEngine_GameObject_SetActive();

		//System.Void UnityEngine.GameObject::set_layer(System.Int32)
		void Register_UnityEngine_GameObject_set_layer();
		Register_UnityEngine_GameObject_set_layer();

		//UnityEngine.Component UnityEngine.GameObject::GetComponent(System.Type)
		void Register_UnityEngine_GameObject_GetComponent();
		Register_UnityEngine_GameObject_GetComponent();

		//UnityEngine.Component UnityEngine.GameObject::GetComponentInChildren(System.Type,System.Boolean)
		void Register_UnityEngine_GameObject_GetComponentInChildren();
		Register_UnityEngine_GameObject_GetComponentInChildren();

		//UnityEngine.Component UnityEngine.GameObject::GetComponentInParent(System.Type)
		void Register_UnityEngine_GameObject_GetComponentInParent();
		Register_UnityEngine_GameObject_GetComponentInParent();

		//UnityEngine.Component UnityEngine.GameObject::Internal_AddComponentWithType(System.Type)
		void Register_UnityEngine_GameObject_Internal_AddComponentWithType();
		Register_UnityEngine_GameObject_Internal_AddComponentWithType();

		//UnityEngine.GameObject UnityEngine.GameObject::CreatePrimitive(UnityEngine.PrimitiveType)
		void Register_UnityEngine_GameObject_CreatePrimitive();
		Register_UnityEngine_GameObject_CreatePrimitive();

		//UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
		void Register_UnityEngine_GameObject_Find();
		Register_UnityEngine_GameObject_Find();

		//UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
		void Register_UnityEngine_GameObject_FindGameObjectsWithTag();
		Register_UnityEngine_GameObject_FindGameObjectsWithTag();

		//UnityEngine.Transform UnityEngine.GameObject::get_transform()
		void Register_UnityEngine_GameObject_get_transform();
		Register_UnityEngine_GameObject_get_transform();

	//End Registrations for type : UnityEngine.GameObject

	//Start Registrations for type : UnityEngine.Gizmos

		//System.Void UnityEngine.Gizmos::INTERNAL_CALL_DrawLine(UnityEngine.Vector3&,UnityEngine.Vector3&)
		void Register_UnityEngine_Gizmos_INTERNAL_CALL_DrawLine();
		Register_UnityEngine_Gizmos_INTERNAL_CALL_DrawLine();

		//System.Void UnityEngine.Gizmos::INTERNAL_CALL_DrawSphere(UnityEngine.Vector3&,System.Single)
		void Register_UnityEngine_Gizmos_INTERNAL_CALL_DrawSphere();
		Register_UnityEngine_Gizmos_INTERNAL_CALL_DrawSphere();

		//System.Void UnityEngine.Gizmos::INTERNAL_CALL_DrawWireCube(UnityEngine.Vector3&,UnityEngine.Vector3&)
		void Register_UnityEngine_Gizmos_INTERNAL_CALL_DrawWireCube();
		Register_UnityEngine_Gizmos_INTERNAL_CALL_DrawWireCube();

		//System.Void UnityEngine.Gizmos::INTERNAL_CALL_DrawWireSphere(UnityEngine.Vector3&,System.Single)
		void Register_UnityEngine_Gizmos_INTERNAL_CALL_DrawWireSphere();
		Register_UnityEngine_Gizmos_INTERNAL_CALL_DrawWireSphere();

		//System.Void UnityEngine.Gizmos::INTERNAL_set_color(UnityEngine.Color&)
		void Register_UnityEngine_Gizmos_INTERNAL_set_color();
		Register_UnityEngine_Gizmos_INTERNAL_set_color();

		//System.Void UnityEngine.Gizmos::INTERNAL_set_matrix(UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Gizmos_INTERNAL_set_matrix();
		Register_UnityEngine_Gizmos_INTERNAL_set_matrix();

	//End Registrations for type : UnityEngine.Gizmos

	//Start Registrations for type : UnityEngine.GL

		//System.Void UnityEngine.GL::Begin(System.Int32)
		void Register_UnityEngine_GL_Begin();
		Register_UnityEngine_GL_Begin();

		//System.Void UnityEngine.GL::End()
		void Register_UnityEngine_GL_End();
		Register_UnityEngine_GL_End();

		//System.Void UnityEngine.GL::GLClear_Injected(System.Boolean,System.Boolean,UnityEngine.Color&,System.Single)
		void Register_UnityEngine_GL_GLClear_Injected();
		Register_UnityEngine_GL_GLClear_Injected();

		//System.Void UnityEngine.GL::LoadOrtho()
		void Register_UnityEngine_GL_LoadOrtho();
		Register_UnityEngine_GL_LoadOrtho();

		//System.Void UnityEngine.GL::PopMatrix()
		void Register_UnityEngine_GL_PopMatrix();
		Register_UnityEngine_GL_PopMatrix();

		//System.Void UnityEngine.GL::PushMatrix()
		void Register_UnityEngine_GL_PushMatrix();
		Register_UnityEngine_GL_PushMatrix();

		//System.Void UnityEngine.GL::TexCoord3(System.Single,System.Single,System.Single)
		void Register_UnityEngine_GL_TexCoord3();
		Register_UnityEngine_GL_TexCoord3();

		//System.Void UnityEngine.GL::Vertex3(System.Single,System.Single,System.Single)
		void Register_UnityEngine_GL_Vertex3();
		Register_UnityEngine_GL_Vertex3();

	//End Registrations for type : UnityEngine.GL

	//Start Registrations for type : UnityEngine.Gradient

		//System.Void UnityEngine.Gradient::Cleanup()
		void Register_UnityEngine_Gradient_Cleanup();
		Register_UnityEngine_Gradient_Cleanup();

		//System.Void UnityEngine.Gradient::INTERNAL_CALL_Evaluate(UnityEngine.Gradient,System.Single,UnityEngine.Color&)
		void Register_UnityEngine_Gradient_INTERNAL_CALL_Evaluate();
		Register_UnityEngine_Gradient_INTERNAL_CALL_Evaluate();

		//System.Void UnityEngine.Gradient::Init()
		void Register_UnityEngine_Gradient_Init();
		Register_UnityEngine_Gradient_Init();

	//End Registrations for type : UnityEngine.Gradient

	//Start Registrations for type : UnityEngine.Graphics

		//System.Int32 UnityEngine.Graphics::Internal_GetMaxDrawMeshInstanceCount()
		void Register_UnityEngine_Graphics_Internal_GetMaxDrawMeshInstanceCount();
		Register_UnityEngine_Graphics_Internal_GetMaxDrawMeshInstanceCount();

		//System.Void UnityEngine.Graphics::Blit2(UnityEngine.Texture,UnityEngine.RenderTexture)
		void Register_UnityEngine_Graphics_Blit2();
		Register_UnityEngine_Graphics_Blit2();

		//System.Void UnityEngine.Graphics::INTERNAL_CALL_Internal_DrawMeshNow2(UnityEngine.Mesh,System.Int32,UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Graphics_INTERNAL_CALL_Internal_DrawMeshNow2();
		Register_UnityEngine_Graphics_INTERNAL_CALL_Internal_DrawMeshNow2();

		//System.Void UnityEngine.Graphics::Internal_BlitMaterial(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32,System.Boolean)
		void Register_UnityEngine_Graphics_Internal_BlitMaterial();
		Register_UnityEngine_Graphics_Internal_BlitMaterial();

		//System.Void UnityEngine.Graphics::Internal_DrawTexture(UnityEngine.Internal_DrawTextureArguments&)
		void Register_UnityEngine_Graphics_Internal_DrawTexture();
		Register_UnityEngine_Graphics_Internal_DrawTexture();

		//System.Void UnityEngine.Graphics::Internal_SetMRTSimple(UnityEngine.RenderBuffer[],UnityEngine.RenderBuffer&,System.Int32,UnityEngine.CubemapFace,System.Int32)
		void Register_UnityEngine_Graphics_Internal_SetMRTSimple();
		Register_UnityEngine_Graphics_Internal_SetMRTSimple();

	//End Registrations for type : UnityEngine.Graphics

	//Start Registrations for type : UnityEngine.GUI

		//System.Boolean UnityEngine.GUI::INTERNAL_CALL_DoButton(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
		void Register_UnityEngine_GUI_INTERNAL_CALL_DoButton();
		Register_UnityEngine_GUI_INTERNAL_CALL_DoButton();

		//System.Boolean UnityEngine.GUI::INTERNAL_CALL_DoToggle(UnityEngine.Rect&,System.Int32,System.Boolean,UnityEngine.GUIContent,System.IntPtr)
		void Register_UnityEngine_GUI_INTERNAL_CALL_DoToggle();
		Register_UnityEngine_GUI_INTERNAL_CALL_DoToggle();

		//System.Void UnityEngine.GUI::INTERNAL_CALL_DoLabel(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
		void Register_UnityEngine_GUI_INTERNAL_CALL_DoLabel();
		Register_UnityEngine_GUI_INTERNAL_CALL_DoLabel();

		//System.Void UnityEngine.GUI::INTERNAL_get_color(UnityEngine.Color&)
		void Register_UnityEngine_GUI_INTERNAL_get_color();
		Register_UnityEngine_GUI_INTERNAL_get_color();

		//System.Void UnityEngine.GUI::set_changed(System.Boolean)
		void Register_UnityEngine_GUI_set_changed();
		Register_UnityEngine_GUI_set_changed();

		//UnityEngine.Material UnityEngine.GUI::get_blendMaterial()
		void Register_UnityEngine_GUI_get_blendMaterial();
		Register_UnityEngine_GUI_get_blendMaterial();

		//UnityEngine.Material UnityEngine.GUI::get_blitMaterial()
		void Register_UnityEngine_GUI_get_blitMaterial();
		Register_UnityEngine_GUI_get_blitMaterial();

		//UnityEngine.Material UnityEngine.GUI::get_roundedRectMaterial()
		void Register_UnityEngine_GUI_get_roundedRectMaterial();
		Register_UnityEngine_GUI_get_roundedRectMaterial();

	//End Registrations for type : UnityEngine.GUI

	//Start Registrations for type : UnityEngine.GUILayer

		//UnityEngine.GUIElement UnityEngine.GUILayer::INTERNAL_CALL_HitTest(UnityEngine.GUILayer,UnityEngine.Vector3&)
		void Register_UnityEngine_GUILayer_INTERNAL_CALL_HitTest();
		Register_UnityEngine_GUILayer_INTERNAL_CALL_HitTest();

	//End Registrations for type : UnityEngine.GUILayer

	//Start Registrations for type : UnityEngine.GUILayoutUtility

		//System.Void UnityEngine.GUILayoutUtility::INTERNAL_CALL_Internal_GetWindowRect(System.Int32,UnityEngine.Rect&)
		void Register_UnityEngine_GUILayoutUtility_INTERNAL_CALL_Internal_GetWindowRect();
		Register_UnityEngine_GUILayoutUtility_INTERNAL_CALL_Internal_GetWindowRect();

		//System.Void UnityEngine.GUILayoutUtility::INTERNAL_CALL_Internal_MoveWindow(System.Int32,UnityEngine.Rect&)
		void Register_UnityEngine_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow();
		Register_UnityEngine_GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow();

	//End Registrations for type : UnityEngine.GUILayoutUtility

	//Start Registrations for type : UnityEngine.GUIStyle

		//System.Boolean UnityEngine.GUIStyle::get_stretchHeight()
		void Register_UnityEngine_GUIStyle_get_stretchHeight();
		Register_UnityEngine_GUIStyle_get_stretchHeight();

		//System.Boolean UnityEngine.GUIStyle::get_stretchWidth()
		void Register_UnityEngine_GUIStyle_get_stretchWidth();
		Register_UnityEngine_GUIStyle_get_stretchWidth();

		//System.Boolean UnityEngine.GUIStyle::get_wordWrap()
		void Register_UnityEngine_GUIStyle_get_wordWrap();
		Register_UnityEngine_GUIStyle_get_wordWrap();

		//System.Single UnityEngine.GUIStyle::Internal_CalcHeight(System.IntPtr,UnityEngine.GUIContent,System.Single)
		void Register_UnityEngine_GUIStyle_Internal_CalcHeight();
		Register_UnityEngine_GUIStyle_Internal_CalcHeight();

		//System.Single UnityEngine.GUIStyle::get_fixedHeight()
		void Register_UnityEngine_GUIStyle_get_fixedHeight();
		Register_UnityEngine_GUIStyle_get_fixedHeight();

		//System.Single UnityEngine.GUIStyle::get_fixedWidth()
		void Register_UnityEngine_GUIStyle_get_fixedWidth();
		Register_UnityEngine_GUIStyle_get_fixedWidth();

		//System.String UnityEngine.GUIStyle::get_name()
		void Register_UnityEngine_GUIStyle_get_name();
		Register_UnityEngine_GUIStyle_get_name();

		//System.Void UnityEngine.GUIStyle::Cleanup()
		void Register_UnityEngine_GUIStyle_Cleanup();
		Register_UnityEngine_GUIStyle_Cleanup();

		//System.Void UnityEngine.GUIStyle::INTERNAL_CALL_GetRectOffsetPtr(UnityEngine.GUIStyle,System.Int32,System.IntPtr&)
		void Register_UnityEngine_GUIStyle_INTERNAL_CALL_GetRectOffsetPtr();
		Register_UnityEngine_GUIStyle_INTERNAL_CALL_GetRectOffsetPtr();

		//System.Void UnityEngine.GUIStyle::INTERNAL_CALL_Internal_CalcSizeWithConstraints(System.IntPtr,UnityEngine.GUIContent,UnityEngine.Vector2&,UnityEngine.Vector2&)
		void Register_UnityEngine_GUIStyle_INTERNAL_CALL_Internal_CalcSizeWithConstraints();
		Register_UnityEngine_GUIStyle_INTERNAL_CALL_Internal_CalcSizeWithConstraints();

		//System.Void UnityEngine.GUIStyle::INTERNAL_CALL_Internal_Draw2(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,System.Boolean)
		void Register_UnityEngine_GUIStyle_INTERNAL_CALL_Internal_Draw2();
		Register_UnityEngine_GUIStyle_INTERNAL_CALL_Internal_Draw2();

		//System.Void UnityEngine.GUIStyle::Init()
		void Register_UnityEngine_GUIStyle_Init();
		Register_UnityEngine_GUIStyle_Init();

		//System.Void UnityEngine.GUIStyle::Internal_CalcMinMaxWidth(System.IntPtr,UnityEngine.GUIContent,System.Single&,System.Single&)
		void Register_UnityEngine_GUIStyle_Internal_CalcMinMaxWidth();
		Register_UnityEngine_GUIStyle_Internal_CalcMinMaxWidth();

		//System.Void UnityEngine.GUIStyle::SetDefaultFont(UnityEngine.Font)
		void Register_UnityEngine_GUIStyle_SetDefaultFont();
		Register_UnityEngine_GUIStyle_SetDefaultFont();

		//System.Void UnityEngine.GUIStyle::set_stretchWidth(System.Boolean)
		void Register_UnityEngine_GUIStyle_set_stretchWidth();
		Register_UnityEngine_GUIStyle_set_stretchWidth();

		//UnityEngine.ImagePosition UnityEngine.GUIStyle::get_imagePosition()
		void Register_UnityEngine_GUIStyle_get_imagePosition();
		Register_UnityEngine_GUIStyle_get_imagePosition();

	//End Registrations for type : UnityEngine.GUIStyle

	//Start Registrations for type : UnityEngine.GUIStyleState

		//System.Void UnityEngine.GUIStyleState::Cleanup()
		void Register_UnityEngine_GUIStyleState_Cleanup();
		Register_UnityEngine_GUIStyleState_Cleanup();

		//System.Void UnityEngine.GUIStyleState::Init()
		void Register_UnityEngine_GUIStyleState_Init();
		Register_UnityEngine_GUIStyleState_Init();

	//End Registrations for type : UnityEngine.GUIStyleState

	//Start Registrations for type : UnityEngine.GUIUtility

		//System.Int32 UnityEngine.GUIUtility::GetControlID(System.Int32,UnityEngine.FocusType)
		void Register_UnityEngine_GUIUtility_GetControlID();
		Register_UnityEngine_GUIUtility_GetControlID();

		//System.Int32 UnityEngine.GUIUtility::INTERNAL_CALL_Internal_GetNextControlID2(System.Int32,UnityEngine.FocusType,UnityEngine.Rect&)
		void Register_UnityEngine_GUIUtility_INTERNAL_CALL_Internal_GetNextControlID2();
		Register_UnityEngine_GUIUtility_INTERNAL_CALL_Internal_GetNextControlID2();

		//System.Int32 UnityEngine.GUIUtility::Internal_GetGUIDepth()
		void Register_UnityEngine_GUIUtility_Internal_GetGUIDepth();
		Register_UnityEngine_GUIUtility_Internal_GetGUIDepth();

		//System.Single UnityEngine.GUIUtility::Internal_GetPixelsPerPoint()
		void Register_UnityEngine_GUIUtility_Internal_GetPixelsPerPoint();
		Register_UnityEngine_GUIUtility_Internal_GetPixelsPerPoint();

		//System.String UnityEngine.GUIUtility::get_systemCopyBuffer()
		void Register_UnityEngine_GUIUtility_get_systemCopyBuffer();
		Register_UnityEngine_GUIUtility_get_systemCopyBuffer();

		//System.Void UnityEngine.GUIUtility::Internal_ExitGUI()
		void Register_UnityEngine_GUIUtility_Internal_ExitGUI();
		Register_UnityEngine_GUIUtility_Internal_ExitGUI();

		//System.Void UnityEngine.GUIUtility::set_systemCopyBuffer(System.String)
		void Register_UnityEngine_GUIUtility_set_systemCopyBuffer();
		Register_UnityEngine_GUIUtility_set_systemCopyBuffer();

		//UnityEngine.GUISkin UnityEngine.GUIUtility::Internal_GetDefaultSkin(System.Int32)
		void Register_UnityEngine_GUIUtility_Internal_GetDefaultSkin();
		Register_UnityEngine_GUIUtility_Internal_GetDefaultSkin();

	//End Registrations for type : UnityEngine.GUIUtility

	//Start Registrations for type : UnityEngine.Input

		//System.Boolean UnityEngine.Input::GetButtonDown(System.String)
		void Register_UnityEngine_Input_GetButtonDown();
		Register_UnityEngine_Input_GetButtonDown();

		//System.Boolean UnityEngine.Input::GetKeyInt(System.Int32)
		void Register_UnityEngine_Input_GetKeyInt();
		Register_UnityEngine_Input_GetKeyInt();

		//System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
		void Register_UnityEngine_Input_GetMouseButton();
		Register_UnityEngine_Input_GetMouseButton();

		//System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
		void Register_UnityEngine_Input_GetMouseButtonDown();
		Register_UnityEngine_Input_GetMouseButtonDown();

		//System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
		void Register_UnityEngine_Input_GetMouseButtonUp();
		Register_UnityEngine_Input_GetMouseButtonUp();

		//System.Boolean UnityEngine.Input::get_mousePresent()
		void Register_UnityEngine_Input_get_mousePresent();
		Register_UnityEngine_Input_get_mousePresent();

		//System.Boolean UnityEngine.Input::get_touchSupported()
		void Register_UnityEngine_Input_get_touchSupported();
		Register_UnityEngine_Input_get_touchSupported();

		//System.Int32 UnityEngine.Input::get_touchCount()
		void Register_UnityEngine_Input_get_touchCount();
		Register_UnityEngine_Input_get_touchCount();

		//System.Single UnityEngine.Input::GetAxis(System.String)
		void Register_UnityEngine_Input_GetAxis();
		Register_UnityEngine_Input_GetAxis();

		//System.Single UnityEngine.Input::GetAxisRaw(System.String)
		void Register_UnityEngine_Input_GetAxisRaw();
		Register_UnityEngine_Input_GetAxisRaw();

		//System.String UnityEngine.Input::get_compositionString()
		void Register_UnityEngine_Input_get_compositionString();
		Register_UnityEngine_Input_get_compositionString();

		//System.Void UnityEngine.Input::INTERNAL_CALL_GetTouch(System.Int32,UnityEngine.Touch&)
		void Register_UnityEngine_Input_INTERNAL_CALL_GetTouch();
		Register_UnityEngine_Input_INTERNAL_CALL_GetTouch();

		//System.Void UnityEngine.Input::INTERNAL_get_compositionCursorPos(UnityEngine.Vector2&)
		void Register_UnityEngine_Input_INTERNAL_get_compositionCursorPos();
		Register_UnityEngine_Input_INTERNAL_get_compositionCursorPos();

		//System.Void UnityEngine.Input::INTERNAL_get_mousePosition(UnityEngine.Vector3&)
		void Register_UnityEngine_Input_INTERNAL_get_mousePosition();
		Register_UnityEngine_Input_INTERNAL_get_mousePosition();

		//System.Void UnityEngine.Input::INTERNAL_get_mouseScrollDelta(UnityEngine.Vector2&)
		void Register_UnityEngine_Input_INTERNAL_get_mouseScrollDelta();
		Register_UnityEngine_Input_INTERNAL_get_mouseScrollDelta();

		//System.Void UnityEngine.Input::INTERNAL_set_compositionCursorPos(UnityEngine.Vector2&)
		void Register_UnityEngine_Input_INTERNAL_set_compositionCursorPos();
		Register_UnityEngine_Input_INTERNAL_set_compositionCursorPos();

		//System.Void UnityEngine.Input::set_imeCompositionMode(UnityEngine.IMECompositionMode)
		void Register_UnityEngine_Input_set_imeCompositionMode();
		Register_UnityEngine_Input_set_imeCompositionMode();

		//UnityEngine.IMECompositionMode UnityEngine.Input::get_imeCompositionMode()
		void Register_UnityEngine_Input_get_imeCompositionMode();
		Register_UnityEngine_Input_get_imeCompositionMode();

	//End Registrations for type : UnityEngine.Input

	//Start Registrations for type : UnityEngine.iOS.NotificationHelper

		//System.Void UnityEngine.iOS.NotificationHelper::DestroyLocal(System.IntPtr)
		void Register_UnityEngine_iOS_NotificationHelper_DestroyLocal();
		Register_UnityEngine_iOS_NotificationHelper_DestroyLocal();

		//System.Void UnityEngine.iOS.NotificationHelper::DestroyRemote(System.IntPtr)
		void Register_UnityEngine_iOS_NotificationHelper_DestroyRemote();
		Register_UnityEngine_iOS_NotificationHelper_DestroyRemote();

	//End Registrations for type : UnityEngine.iOS.NotificationHelper

	//Start Registrations for type : UnityEngine.Light

		//System.Void UnityEngine.Light::set_colorTemperature(System.Single)
		void Register_UnityEngine_Light_set_colorTemperature();
		Register_UnityEngine_Light_set_colorTemperature();

		//System.Void UnityEngine.Light::set_color_Injected(UnityEngine.Color&)
		void Register_UnityEngine_Light_set_color_Injected();
		Register_UnityEngine_Light_set_color_Injected();

		//System.Void UnityEngine.Light::set_intensity(System.Single)
		void Register_UnityEngine_Light_set_intensity();
		Register_UnityEngine_Light_set_intensity();

	//End Registrations for type : UnityEngine.Light

	//Start Registrations for type : UnityEngine.LightmapSettings

		//UnityEngine.LightProbes UnityEngine.LightmapSettings::get_lightProbes()
		void Register_UnityEngine_LightmapSettings_get_lightProbes();
		Register_UnityEngine_LightmapSettings_get_lightProbes();

	//End Registrations for type : UnityEngine.LightmapSettings

	//Start Registrations for type : UnityEngine.LightProbes

		//System.Int32 UnityEngine.LightProbes::get_count()
		void Register_UnityEngine_LightProbes_get_count();
		Register_UnityEngine_LightProbes_get_count();

		//UnityEngine.Rendering.SphericalHarmonicsL2[] UnityEngine.LightProbes::get_bakedProbes()
		void Register_UnityEngine_LightProbes_get_bakedProbes();
		Register_UnityEngine_LightProbes_get_bakedProbes();

	//End Registrations for type : UnityEngine.LightProbes

	//Start Registrations for type : UnityEngine.Material

		//System.Boolean UnityEngine.Material::HasProperty(System.Int32)
		void Register_UnityEngine_Material_HasProperty();
		Register_UnityEngine_Material_HasProperty();

		//System.Boolean UnityEngine.Material::SetPass(System.Int32)
		void Register_UnityEngine_Material_SetPass();
		Register_UnityEngine_Material_SetPass();

		//System.Void UnityEngine.Material::CreateWithMaterial(UnityEngine.Material,UnityEngine.Material)
		void Register_UnityEngine_Material_CreateWithMaterial();
		Register_UnityEngine_Material_CreateWithMaterial();

		//System.Void UnityEngine.Material::CreateWithShader(UnityEngine.Material,UnityEngine.Shader)
		void Register_UnityEngine_Material_CreateWithShader();
		Register_UnityEngine_Material_CreateWithShader();

		//System.Void UnityEngine.Material::DisableKeyword(System.String)
		void Register_UnityEngine_Material_DisableKeyword();
		Register_UnityEngine_Material_DisableKeyword();

		//System.Void UnityEngine.Material::EnableKeyword(System.String)
		void Register_UnityEngine_Material_EnableKeyword();
		Register_UnityEngine_Material_EnableKeyword();

		//System.Void UnityEngine.Material::SetBufferImpl(System.Int32,UnityEngine.ComputeBuffer)
		void Register_UnityEngine_Material_SetBufferImpl();
		Register_UnityEngine_Material_SetBufferImpl();

		//System.Void UnityEngine.Material::SetColorImpl_Injected(System.Int32,UnityEngine.Color&)
		void Register_UnityEngine_Material_SetColorImpl_Injected();
		Register_UnityEngine_Material_SetColorImpl_Injected();

		//System.Void UnityEngine.Material::SetFloatImpl(System.Int32,System.Single)
		void Register_UnityEngine_Material_SetFloatImpl();
		Register_UnityEngine_Material_SetFloatImpl();

		//System.Void UnityEngine.Material::SetMatrixImpl_Injected(System.Int32,UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Material_SetMatrixImpl_Injected();
		Register_UnityEngine_Material_SetMatrixImpl_Injected();

		//System.Void UnityEngine.Material::SetTextureImpl(System.Int32,UnityEngine.Texture)
		void Register_UnityEngine_Material_SetTextureImpl();
		Register_UnityEngine_Material_SetTextureImpl();

		//System.Void UnityEngine.Material::set_shaderKeywords(System.String[])
		void Register_UnityEngine_Material_set_shaderKeywords();
		Register_UnityEngine_Material_set_shaderKeywords();

		//UnityEngine.Texture UnityEngine.Material::GetTextureImpl(System.Int32)
		void Register_UnityEngine_Material_GetTextureImpl();
		Register_UnityEngine_Material_GetTextureImpl();

	//End Registrations for type : UnityEngine.Material

	//Start Registrations for type : UnityEngine.MaterialPropertyBlock

		//System.IntPtr UnityEngine.MaterialPropertyBlock::CreateImpl()
		void Register_UnityEngine_MaterialPropertyBlock_CreateImpl();
		Register_UnityEngine_MaterialPropertyBlock_CreateImpl();

		//System.Void UnityEngine.MaterialPropertyBlock::DestroyImpl(System.IntPtr)
		void Register_UnityEngine_MaterialPropertyBlock_DestroyImpl();
		Register_UnityEngine_MaterialPropertyBlock_DestroyImpl();

		//System.Void UnityEngine.MaterialPropertyBlock::SetColorImpl_Injected(System.Int32,UnityEngine.Color&)
		void Register_UnityEngine_MaterialPropertyBlock_SetColorImpl_Injected();
		Register_UnityEngine_MaterialPropertyBlock_SetColorImpl_Injected();

	//End Registrations for type : UnityEngine.MaterialPropertyBlock

	//Start Registrations for type : UnityEngine.Mathf

		//System.Single UnityEngine.Mathf::GammaToLinearSpace(System.Single)
		void Register_UnityEngine_Mathf_GammaToLinearSpace();
		Register_UnityEngine_Mathf_GammaToLinearSpace();

		//System.Single UnityEngine.Mathf::LinearToGammaSpace(System.Single)
		void Register_UnityEngine_Mathf_LinearToGammaSpace();
		Register_UnityEngine_Mathf_LinearToGammaSpace();

	//End Registrations for type : UnityEngine.Mathf

	//Start Registrations for type : UnityEngine.Matrix4x4

		//System.Void UnityEngine.Matrix4x4::Inverse_Injected(UnityEngine.Matrix4x4&,UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Matrix4x4_Inverse_Injected();
		Register_UnityEngine_Matrix4x4_Inverse_Injected();

		//System.Void UnityEngine.Matrix4x4::Ortho_Injected(System.Single,System.Single,System.Single,System.Single,System.Single,System.Single,UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Matrix4x4_Ortho_Injected();
		Register_UnityEngine_Matrix4x4_Ortho_Injected();

		//System.Void UnityEngine.Matrix4x4::TRS_Injected(UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&,UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Matrix4x4_TRS_Injected();
		Register_UnityEngine_Matrix4x4_TRS_Injected();

	//End Registrations for type : UnityEngine.Matrix4x4

	//Start Registrations for type : UnityEngine.Mesh

		//System.Array UnityEngine.Mesh::GetAllocArrayFromChannelImpl(UnityEngine.Mesh/InternalShaderChannel,UnityEngine.Mesh/InternalVertexChannelType,System.Int32)
		void Register_UnityEngine_Mesh_GetAllocArrayFromChannelImpl();
		Register_UnityEngine_Mesh_GetAllocArrayFromChannelImpl();

		//System.Boolean UnityEngine.Mesh::HasChannel(UnityEngine.Mesh/InternalShaderChannel)
		void Register_UnityEngine_Mesh_HasChannel();
		Register_UnityEngine_Mesh_HasChannel();

		//System.Boolean UnityEngine.Mesh::get_canAccess()
		void Register_UnityEngine_Mesh_get_canAccess();
		Register_UnityEngine_Mesh_get_canAccess();

		//System.Int32 UnityEngine.Mesh::GetBlendShapeIndex(System.String)
		void Register_UnityEngine_Mesh_GetBlendShapeIndex();
		Register_UnityEngine_Mesh_GetBlendShapeIndex();

		//System.Int32 UnityEngine.Mesh::get_subMeshCount()
		void Register_UnityEngine_Mesh_get_subMeshCount();
		Register_UnityEngine_Mesh_get_subMeshCount();

		//System.Int32[] UnityEngine.Mesh::GetIndicesImpl(System.Int32,System.Boolean)
		void Register_UnityEngine_Mesh_GetIndicesImpl();
		Register_UnityEngine_Mesh_GetIndicesImpl();

		//System.Void UnityEngine.Mesh::ClearImpl(System.Boolean)
		void Register_UnityEngine_Mesh_ClearImpl();
		Register_UnityEngine_Mesh_ClearImpl();

		//System.Void UnityEngine.Mesh::Internal_Create(UnityEngine.Mesh)
		void Register_UnityEngine_Mesh_Internal_Create();
		Register_UnityEngine_Mesh_Internal_Create();

		//System.Void UnityEngine.Mesh::PrintErrorCantAccessChannel(UnityEngine.Mesh/InternalShaderChannel)
		void Register_UnityEngine_Mesh_PrintErrorCantAccessChannel();
		Register_UnityEngine_Mesh_PrintErrorCantAccessChannel();

		//System.Void UnityEngine.Mesh::RecalculateBoundsImpl()
		void Register_UnityEngine_Mesh_RecalculateBoundsImpl();
		Register_UnityEngine_Mesh_RecalculateBoundsImpl();

		//System.Void UnityEngine.Mesh::RecalculateNormalsImpl()
		void Register_UnityEngine_Mesh_RecalculateNormalsImpl();
		Register_UnityEngine_Mesh_RecalculateNormalsImpl();

		//System.Void UnityEngine.Mesh::SetArrayForChannelImpl(UnityEngine.Mesh/InternalShaderChannel,UnityEngine.Mesh/InternalVertexChannelType,System.Int32,System.Array,System.Int32)
		void Register_UnityEngine_Mesh_SetArrayForChannelImpl();
		Register_UnityEngine_Mesh_SetArrayForChannelImpl();

		//System.Void UnityEngine.Mesh::SetIndicesImpl(System.Int32,UnityEngine.MeshTopology,System.Array,System.Int32,System.Boolean,System.Int32)
		void Register_UnityEngine_Mesh_SetIndicesImpl();
		Register_UnityEngine_Mesh_SetIndicesImpl();

		//System.Void UnityEngine.Mesh::UploadMeshDataImpl(System.Boolean)
		void Register_UnityEngine_Mesh_UploadMeshDataImpl();
		Register_UnityEngine_Mesh_UploadMeshDataImpl();

	//End Registrations for type : UnityEngine.Mesh

	//Start Registrations for type : UnityEngine.MeshFilter

		//System.Void UnityEngine.MeshFilter::set_mesh(UnityEngine.Mesh)
		void Register_UnityEngine_MeshFilter_set_mesh();
		Register_UnityEngine_MeshFilter_set_mesh();

	//End Registrations for type : UnityEngine.MeshFilter

	//Start Registrations for type : UnityEngine.Microphone

		//System.Int32 UnityEngine.Microphone::GetPosition(System.String)
		void Register_UnityEngine_Microphone_GetPosition();
		Register_UnityEngine_Microphone_GetPosition();

		//System.Void UnityEngine.Microphone::End(System.String)
		void Register_UnityEngine_Microphone_End();
		Register_UnityEngine_Microphone_End();

		//UnityEngine.AudioClip UnityEngine.Microphone::Start(System.String,System.Boolean,System.Int32,System.Int32)
		void Register_UnityEngine_Microphone_Start();
		Register_UnityEngine_Microphone_Start();

	//End Registrations for type : UnityEngine.Microphone

	//Start Registrations for type : UnityEngine.MonoBehaviour

		//System.Boolean UnityEngine.MonoBehaviour::Internal_IsInvokingAll(UnityEngine.MonoBehaviour)
		void Register_UnityEngine_MonoBehaviour_Internal_IsInvokingAll();
		Register_UnityEngine_MonoBehaviour_Internal_IsInvokingAll();

		//System.Boolean UnityEngine.MonoBehaviour::IsInvoking(UnityEngine.MonoBehaviour,System.String)
		void Register_UnityEngine_MonoBehaviour_IsInvoking();
		Register_UnityEngine_MonoBehaviour_IsInvoking();

		//System.Boolean UnityEngine.MonoBehaviour::IsObjectMonoBehaviour(UnityEngine.Object)
		void Register_UnityEngine_MonoBehaviour_IsObjectMonoBehaviour();
		Register_UnityEngine_MonoBehaviour_IsObjectMonoBehaviour();

		//System.Boolean UnityEngine.MonoBehaviour::get_useGUILayout()
		void Register_UnityEngine_MonoBehaviour_get_useGUILayout();
		Register_UnityEngine_MonoBehaviour_get_useGUILayout();

		//System.String UnityEngine.MonoBehaviour::GetScriptClassName()
		void Register_UnityEngine_MonoBehaviour_GetScriptClassName();
		Register_UnityEngine_MonoBehaviour_GetScriptClassName();

		//System.Void UnityEngine.MonoBehaviour::CancelInvoke(UnityEngine.MonoBehaviour,System.String)
		void Register_UnityEngine_MonoBehaviour_CancelInvoke();
		Register_UnityEngine_MonoBehaviour_CancelInvoke();

		//System.Void UnityEngine.MonoBehaviour::Internal_CancelInvokeAll(UnityEngine.MonoBehaviour)
		void Register_UnityEngine_MonoBehaviour_Internal_CancelInvokeAll();
		Register_UnityEngine_MonoBehaviour_Internal_CancelInvokeAll();

		//System.Void UnityEngine.MonoBehaviour::InvokeDelayed(UnityEngine.MonoBehaviour,System.String,System.Single,System.Single)
		void Register_UnityEngine_MonoBehaviour_InvokeDelayed();
		Register_UnityEngine_MonoBehaviour_InvokeDelayed();

		//System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
		void Register_UnityEngine_MonoBehaviour_StopAllCoroutines();
		Register_UnityEngine_MonoBehaviour_StopAllCoroutines();

		//System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.String)
		void Register_UnityEngine_MonoBehaviour_StopCoroutine();
		Register_UnityEngine_MonoBehaviour_StopCoroutine();

		//System.Void UnityEngine.MonoBehaviour::StopCoroutineFromEnumeratorManaged(System.Collections.IEnumerator)
		void Register_UnityEngine_MonoBehaviour_StopCoroutineFromEnumeratorManaged();
		Register_UnityEngine_MonoBehaviour_StopCoroutineFromEnumeratorManaged();

		//System.Void UnityEngine.MonoBehaviour::StopCoroutineManaged(UnityEngine.Coroutine)
		void Register_UnityEngine_MonoBehaviour_StopCoroutineManaged();
		Register_UnityEngine_MonoBehaviour_StopCoroutineManaged();

		//System.Void UnityEngine.MonoBehaviour::set_useGUILayout(System.Boolean)
		void Register_UnityEngine_MonoBehaviour_set_useGUILayout();
		Register_UnityEngine_MonoBehaviour_set_useGUILayout();

		//UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutineManaged(System.String,System.Object)
		void Register_UnityEngine_MonoBehaviour_StartCoroutineManaged();
		Register_UnityEngine_MonoBehaviour_StartCoroutineManaged();

		//UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutineManaged2(System.Collections.IEnumerator)
		void Register_UnityEngine_MonoBehaviour_StartCoroutineManaged2();
		Register_UnityEngine_MonoBehaviour_StartCoroutineManaged2();

	//End Registrations for type : UnityEngine.MonoBehaviour

	//Start Registrations for type : UnityEngine.Motion

		//System.Boolean UnityEngine.Motion::get_isLooping()
		void Register_UnityEngine_Motion_get_isLooping();
		Register_UnityEngine_Motion_get_isLooping();

	//End Registrations for type : UnityEngine.Motion

	//Start Registrations for type : UnityEngine.Networking.CertificateHandler

		//System.Void UnityEngine.Networking.CertificateHandler::Release()
		void Register_UnityEngine_Networking_CertificateHandler_Release();
		Register_UnityEngine_Networking_CertificateHandler_Release();

	//End Registrations for type : UnityEngine.Networking.CertificateHandler

	//Start Registrations for type : UnityEngine.Networking.DownloadHandler

		//System.Byte[] UnityEngine.Networking.DownloadHandler::InternalGetByteArray(UnityEngine.Networking.DownloadHandler)
		void Register_UnityEngine_Networking_DownloadHandler_InternalGetByteArray();
		Register_UnityEngine_Networking_DownloadHandler_InternalGetByteArray();

		//System.String UnityEngine.Networking.DownloadHandler::GetContentType()
		void Register_UnityEngine_Networking_DownloadHandler_GetContentType();
		Register_UnityEngine_Networking_DownloadHandler_GetContentType();

		//System.Void UnityEngine.Networking.DownloadHandler::Release()
		void Register_UnityEngine_Networking_DownloadHandler_Release();
		Register_UnityEngine_Networking_DownloadHandler_Release();

	//End Registrations for type : UnityEngine.Networking.DownloadHandler

	//Start Registrations for type : UnityEngine.Networking.DownloadHandlerAssetBundle

		//UnityEngine.AssetBundle UnityEngine.Networking.DownloadHandlerAssetBundle::get_assetBundle()
		void Register_UnityEngine_Networking_DownloadHandlerAssetBundle_get_assetBundle();
		Register_UnityEngine_Networking_DownloadHandlerAssetBundle_get_assetBundle();

	//End Registrations for type : UnityEngine.Networking.DownloadHandlerAssetBundle

	//Start Registrations for type : UnityEngine.Networking.DownloadHandlerBuffer

		//System.IntPtr UnityEngine.Networking.DownloadHandlerBuffer::Create(UnityEngine.Networking.DownloadHandlerBuffer)
		void Register_UnityEngine_Networking_DownloadHandlerBuffer_Create();
		Register_UnityEngine_Networking_DownloadHandlerBuffer_Create();

	//End Registrations for type : UnityEngine.Networking.DownloadHandlerBuffer

	//Start Registrations for type : UnityEngine.Networking.UnityWebRequest

		//System.Boolean UnityEngine.Networking.UnityWebRequest::IsExecuting()
		void Register_UnityEngine_Networking_UnityWebRequest_IsExecuting();
		Register_UnityEngine_Networking_UnityWebRequest_IsExecuting();

		//System.Boolean UnityEngine.Networking.UnityWebRequest::get_isDone()
		void Register_UnityEngine_Networking_UnityWebRequest_get_isDone();
		Register_UnityEngine_Networking_UnityWebRequest_get_isDone();

		//System.Boolean UnityEngine.Networking.UnityWebRequest::get_isHttpError()
		void Register_UnityEngine_Networking_UnityWebRequest_get_isHttpError();
		Register_UnityEngine_Networking_UnityWebRequest_get_isHttpError();

		//System.Boolean UnityEngine.Networking.UnityWebRequest::get_isModifiable()
		void Register_UnityEngine_Networking_UnityWebRequest_get_isModifiable();
		Register_UnityEngine_Networking_UnityWebRequest_get_isModifiable();

		//System.Boolean UnityEngine.Networking.UnityWebRequest::get_isNetworkError()
		void Register_UnityEngine_Networking_UnityWebRequest_get_isNetworkError();
		Register_UnityEngine_Networking_UnityWebRequest_get_isNetworkError();

		//System.Int64 UnityEngine.Networking.UnityWebRequest::get_responseCode()
		void Register_UnityEngine_Networking_UnityWebRequest_get_responseCode();
		Register_UnityEngine_Networking_UnityWebRequest_get_responseCode();

		//System.IntPtr UnityEngine.Networking.UnityWebRequest::Create()
		void Register_UnityEngine_Networking_UnityWebRequest_Create();
		Register_UnityEngine_Networking_UnityWebRequest_Create();

		//System.Single UnityEngine.Networking.UnityWebRequest::GetDownloadProgress()
		void Register_UnityEngine_Networking_UnityWebRequest_GetDownloadProgress();
		Register_UnityEngine_Networking_UnityWebRequest_GetDownloadProgress();

		//System.String UnityEngine.Networking.UnityWebRequest::GetUrl()
		void Register_UnityEngine_Networking_UnityWebRequest_GetUrl();
		Register_UnityEngine_Networking_UnityWebRequest_GetUrl();

		//System.String UnityEngine.Networking.UnityWebRequest::GetWebErrorString(UnityEngine.Networking.UnityWebRequest/UnityWebRequestError)
		void Register_UnityEngine_Networking_UnityWebRequest_GetWebErrorString();
		Register_UnityEngine_Networking_UnityWebRequest_GetWebErrorString();

		//System.Void UnityEngine.Networking.UnityWebRequest::Abort()
		void Register_UnityEngine_Networking_UnityWebRequest_Abort();
		Register_UnityEngine_Networking_UnityWebRequest_Abort();

		//System.Void UnityEngine.Networking.UnityWebRequest::Release()
		void Register_UnityEngine_Networking_UnityWebRequest_Release();
		Register_UnityEngine_Networking_UnityWebRequest_Release();

		//UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::GetError()
		void Register_UnityEngine_Networking_UnityWebRequest_GetError();
		Register_UnityEngine_Networking_UnityWebRequest_GetError();

		//UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetCustomMethod(System.String)
		void Register_UnityEngine_Networking_UnityWebRequest_SetCustomMethod();
		Register_UnityEngine_Networking_UnityWebRequest_SetCustomMethod();

		//UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetDownloadHandler(UnityEngine.Networking.DownloadHandler)
		void Register_UnityEngine_Networking_UnityWebRequest_SetDownloadHandler();
		Register_UnityEngine_Networking_UnityWebRequest_SetDownloadHandler();

		//UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetMethod(UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod)
		void Register_UnityEngine_Networking_UnityWebRequest_SetMethod();
		Register_UnityEngine_Networking_UnityWebRequest_SetMethod();

		//UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetUploadHandler(UnityEngine.Networking.UploadHandler)
		void Register_UnityEngine_Networking_UnityWebRequest_SetUploadHandler();
		Register_UnityEngine_Networking_UnityWebRequest_SetUploadHandler();

		//UnityEngine.Networking.UnityWebRequest/UnityWebRequestError UnityEngine.Networking.UnityWebRequest::SetUrl(System.String)
		void Register_UnityEngine_Networking_UnityWebRequest_SetUrl();
		Register_UnityEngine_Networking_UnityWebRequest_SetUrl();

		//UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::BeginWebRequest()
		void Register_UnityEngine_Networking_UnityWebRequest_BeginWebRequest();
		Register_UnityEngine_Networking_UnityWebRequest_BeginWebRequest();

	//End Registrations for type : UnityEngine.Networking.UnityWebRequest

	//Start Registrations for type : UnityEngine.Networking.UploadHandler

		//System.Void UnityEngine.Networking.UploadHandler::Release()
		void Register_UnityEngine_Networking_UploadHandler_Release();
		Register_UnityEngine_Networking_UploadHandler_Release();

	//End Registrations for type : UnityEngine.Networking.UploadHandler

	//Start Registrations for type : UnityEngine.NoAllocHelpers

		//System.Array UnityEngine.NoAllocHelpers::ExtractArrayFromList(System.Object)
		void Register_UnityEngine_NoAllocHelpers_ExtractArrayFromList();
		Register_UnityEngine_NoAllocHelpers_ExtractArrayFromList();

	//End Registrations for type : UnityEngine.NoAllocHelpers

	//Start Registrations for type : UnityEngine.Object

		//System.Int32 UnityEngine.Object::GetOffsetOfInstanceIDInCPlusPlusObject()
		void Register_UnityEngine_Object_GetOffsetOfInstanceIDInCPlusPlusObject();
		Register_UnityEngine_Object_GetOffsetOfInstanceIDInCPlusPlusObject();

		//System.String UnityEngine.Object::GetName(UnityEngine.Object)
		void Register_UnityEngine_Object_GetName();
		Register_UnityEngine_Object_GetName();

		//System.String UnityEngine.Object::ToString(UnityEngine.Object)
		void Register_UnityEngine_Object_ToString();
		Register_UnityEngine_Object_ToString();

		//System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
		void Register_UnityEngine_Object_Destroy();
		Register_UnityEngine_Object_Destroy();

		//System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object,System.Boolean)
		void Register_UnityEngine_Object_DestroyImmediate();
		Register_UnityEngine_Object_DestroyImmediate();

		//System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
		void Register_UnityEngine_Object_DontDestroyOnLoad();
		Register_UnityEngine_Object_DontDestroyOnLoad();

		//System.Void UnityEngine.Object::SetName(UnityEngine.Object,System.String)
		void Register_UnityEngine_Object_SetName();
		Register_UnityEngine_Object_SetName();

		//System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
		void Register_UnityEngine_Object_set_hideFlags();
		Register_UnityEngine_Object_set_hideFlags();

		//UnityEngine.HideFlags UnityEngine.Object::get_hideFlags()
		void Register_UnityEngine_Object_get_hideFlags();
		Register_UnityEngine_Object_get_hideFlags();

		//UnityEngine.Object UnityEngine.Object::FindObjectFromInstanceID(System.Int32)
		void Register_UnityEngine_Object_FindObjectFromInstanceID();
		Register_UnityEngine_Object_FindObjectFromInstanceID();

		//UnityEngine.Object UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)
		void Register_UnityEngine_Object_Internal_CloneSingle();
		Register_UnityEngine_Object_Internal_CloneSingle();

		//UnityEngine.Object UnityEngine.Object::Internal_CloneSingleWithParent(UnityEngine.Object,UnityEngine.Transform,System.Boolean)
		void Register_UnityEngine_Object_Internal_CloneSingleWithParent();
		Register_UnityEngine_Object_Internal_CloneSingleWithParent();

		//UnityEngine.Object UnityEngine.Object::Internal_InstantiateSingle_Injected(UnityEngine.Object,UnityEngine.Vector3&,UnityEngine.Quaternion&)
		void Register_UnityEngine_Object_Internal_InstantiateSingle_Injected();
		Register_UnityEngine_Object_Internal_InstantiateSingle_Injected();

		//UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type)
		void Register_UnityEngine_Object_FindObjectsOfType();
		Register_UnityEngine_Object_FindObjectsOfType();

	//End Registrations for type : UnityEngine.Object

	//Start Registrations for type : UnityEngine.ParticleSystem

		//System.Boolean UnityEngine.ParticleSystem::IsAlive(System.Boolean)
		void Register_UnityEngine_ParticleSystem_IsAlive();
		Register_UnityEngine_ParticleSystem_IsAlive();

		//System.Int32 UnityEngine.ParticleSystem::GetParticles(UnityEngine.ParticleSystem/Particle[])
		void Register_UnityEngine_ParticleSystem_GetParticles();
		Register_UnityEngine_ParticleSystem_GetParticles();

		//System.Single UnityEngine.ParticleSystem::get_time()
		void Register_UnityEngine_ParticleSystem_get_time();
		Register_UnityEngine_ParticleSystem_get_time();

		//System.UInt32 UnityEngine.ParticleSystem::get_randomSeed()
		void Register_UnityEngine_ParticleSystem_get_randomSeed();
		Register_UnityEngine_ParticleSystem_get_randomSeed();

		//System.Void UnityEngine.ParticleSystem::INTERNAL_CALL_Emit(UnityEngine.ParticleSystem,System.Int32)
		void Register_UnityEngine_ParticleSystem_INTERNAL_CALL_Emit();
		Register_UnityEngine_ParticleSystem_INTERNAL_CALL_Emit();

		//System.Void UnityEngine.ParticleSystem::Play(System.Boolean)
		void Register_UnityEngine_ParticleSystem_Play();
		Register_UnityEngine_ParticleSystem_Play();

		//System.Void UnityEngine.ParticleSystem::SetParticles(UnityEngine.ParticleSystem/Particle[],System.Int32)
		void Register_UnityEngine_ParticleSystem_SetParticles();
		Register_UnityEngine_ParticleSystem_SetParticles();

		//System.Void UnityEngine.ParticleSystem::Simulate(System.Single,System.Boolean,System.Boolean,System.Boolean)
		void Register_UnityEngine_ParticleSystem_Simulate();
		Register_UnityEngine_ParticleSystem_Simulate();

		//System.Void UnityEngine.ParticleSystem::Stop(System.Boolean,UnityEngine.ParticleSystemStopBehavior)
		void Register_UnityEngine_ParticleSystem_Stop();
		Register_UnityEngine_ParticleSystem_Stop();

		//System.Void UnityEngine.ParticleSystem::set_randomSeed(System.UInt32)
		void Register_UnityEngine_ParticleSystem_set_randomSeed();
		Register_UnityEngine_ParticleSystem_set_randomSeed();

		//System.Void UnityEngine.ParticleSystem::set_useAutoRandomSeed(System.Boolean)
		void Register_UnityEngine_ParticleSystem_set_useAutoRandomSeed();
		Register_UnityEngine_ParticleSystem_set_useAutoRandomSeed();

	//End Registrations for type : UnityEngine.ParticleSystem

	//Start Registrations for type : UnityEngine.ParticleSystem/EmissionModule

		//System.Void UnityEngine.ParticleSystem/EmissionModule::SetRateOverTime(UnityEngine.ParticleSystem,UnityEngine.ParticleSystem/MinMaxCurve&)
		void Register_UnityEngine_ParticleSystem_EmissionModule_SetRateOverTime();
		Register_UnityEngine_ParticleSystem_EmissionModule_SetRateOverTime();

	//End Registrations for type : UnityEngine.ParticleSystem/EmissionModule

	//Start Registrations for type : UnityEngine.ParticleSystem/MainModule

		//System.Boolean UnityEngine.ParticleSystem/MainModule::GetLoop(UnityEngine.ParticleSystem)
		void Register_UnityEngine_ParticleSystem_MainModule_GetLoop();
		Register_UnityEngine_ParticleSystem_MainModule_GetLoop();

		//System.Int32 UnityEngine.ParticleSystem/MainModule::GetMaxParticles(UnityEngine.ParticleSystem)
		void Register_UnityEngine_ParticleSystem_MainModule_GetMaxParticles();
		Register_UnityEngine_ParticleSystem_MainModule_GetMaxParticles();

		//System.Single UnityEngine.ParticleSystem/MainModule::GetDuration(UnityEngine.ParticleSystem)
		void Register_UnityEngine_ParticleSystem_MainModule_GetDuration();
		Register_UnityEngine_ParticleSystem_MainModule_GetDuration();

	//End Registrations for type : UnityEngine.ParticleSystem/MainModule

	//Start Registrations for type : UnityEngine.Physics

		//System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
		void Register_UnityEngine_Physics_INTERNAL_CALL_Internal_Raycast();
		Register_UnityEngine_Physics_INTERNAL_CALL_Internal_Raycast();

		//System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_RaycastTest(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
		void Register_UnityEngine_Physics_INTERNAL_CALL_Internal_RaycastTest();
		Register_UnityEngine_Physics_INTERNAL_CALL_Internal_RaycastTest();

		//UnityEngine.RaycastHit[] UnityEngine.Physics::INTERNAL_CALL_RaycastAll(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
		void Register_UnityEngine_Physics_INTERNAL_CALL_RaycastAll();
		Register_UnityEngine_Physics_INTERNAL_CALL_RaycastAll();

	//End Registrations for type : UnityEngine.Physics

	//Start Registrations for type : UnityEngine.Physics2D

		//System.Boolean UnityEngine.Physics2D::get_queriesHitTriggers()
		void Register_UnityEngine_Physics2D_get_queriesHitTriggers();
		Register_UnityEngine_Physics2D_get_queriesHitTriggers();

		//System.Int32 UnityEngine.Physics2D::GetRayIntersectionNonAlloc_Internal_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32,UnityEngine.RaycastHit2D[])
		void Register_UnityEngine_Physics2D_GetRayIntersectionNonAlloc_Internal_Injected();
		Register_UnityEngine_Physics2D_GetRayIntersectionNonAlloc_Internal_Injected();

		//System.Int32 UnityEngine.Physics2D::RaycastNonAlloc_Internal_Injected(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,UnityEngine.ContactFilter2D&,UnityEngine.RaycastHit2D[])
		void Register_UnityEngine_Physics2D_RaycastNonAlloc_Internal_Injected();
		Register_UnityEngine_Physics2D_RaycastNonAlloc_Internal_Injected();

		//System.Void UnityEngine.Physics2D::Raycast_Internal_Injected(UnityEngine.Vector2&,UnityEngine.Vector2&,System.Single,UnityEngine.ContactFilter2D&,UnityEngine.RaycastHit2D&)
		void Register_UnityEngine_Physics2D_Raycast_Internal_Injected();
		Register_UnityEngine_Physics2D_Raycast_Internal_Injected();

		//UnityEngine.RaycastHit2D[] UnityEngine.Physics2D::GetRayIntersectionAll_Internal_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Single,System.Int32)
		void Register_UnityEngine_Physics2D_GetRayIntersectionAll_Internal_Injected();
		Register_UnityEngine_Physics2D_GetRayIntersectionAll_Internal_Injected();

	//End Registrations for type : UnityEngine.Physics2D

	//Start Registrations for type : UnityEngine.Playables.PlayableDirector

		//System.Double UnityEngine.Playables.PlayableDirector::get_time()
		void Register_UnityEngine_Playables_PlayableDirector_get_time();
		Register_UnityEngine_Playables_PlayableDirector_get_time();

		//System.Void UnityEngine.Playables.PlayableDirector::Evaluate()
		void Register_UnityEngine_Playables_PlayableDirector_Evaluate();
		Register_UnityEngine_Playables_PlayableDirector_Evaluate();

		//System.Void UnityEngine.Playables.PlayableDirector::GetGraphHandle_Injected(UnityEngine.Playables.PlayableGraph&)
		void Register_UnityEngine_Playables_PlayableDirector_GetGraphHandle_Injected();
		Register_UnityEngine_Playables_PlayableDirector_GetGraphHandle_Injected();

		//System.Void UnityEngine.Playables.PlayableDirector::Pause()
		void Register_UnityEngine_Playables_PlayableDirector_Pause();
		Register_UnityEngine_Playables_PlayableDirector_Pause();

		//System.Void UnityEngine.Playables.PlayableDirector::Play()
		void Register_UnityEngine_Playables_PlayableDirector_Play();
		Register_UnityEngine_Playables_PlayableDirector_Play();

		//System.Void UnityEngine.Playables.PlayableDirector::Stop()
		void Register_UnityEngine_Playables_PlayableDirector_Stop();
		Register_UnityEngine_Playables_PlayableDirector_Stop();

		//System.Void UnityEngine.Playables.PlayableDirector::set_time(System.Double)
		void Register_UnityEngine_Playables_PlayableDirector_set_time();
		Register_UnityEngine_Playables_PlayableDirector_set_time();

		//UnityEngine.Object UnityEngine.Playables.PlayableDirector::GetGenericBinding(UnityEngine.Object)
		void Register_UnityEngine_Playables_PlayableDirector_GetGenericBinding();
		Register_UnityEngine_Playables_PlayableDirector_GetGenericBinding();

		//UnityEngine.Object UnityEngine.Playables.PlayableDirector::GetReferenceValue_Injected(UnityEngine.PropertyName&,System.Boolean&)
		void Register_UnityEngine_Playables_PlayableDirector_GetReferenceValue_Injected();
		Register_UnityEngine_Playables_PlayableDirector_GetReferenceValue_Injected();

		//UnityEngine.Playables.DirectorWrapMode UnityEngine.Playables.PlayableDirector::GetWrapMode()
		void Register_UnityEngine_Playables_PlayableDirector_GetWrapMode();
		Register_UnityEngine_Playables_PlayableDirector_GetWrapMode();

		//UnityEngine.ScriptableObject UnityEngine.Playables.PlayableDirector::Internal_GetPlayableAsset()
		void Register_UnityEngine_Playables_PlayableDirector_Internal_GetPlayableAsset();
		Register_UnityEngine_Playables_PlayableDirector_Internal_GetPlayableAsset();

	//End Registrations for type : UnityEngine.Playables.PlayableDirector

	//Start Registrations for type : UnityEngine.Playables.PlayableGraph

		//System.Boolean UnityEngine.Playables.PlayableGraph::ConnectInternal_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.PlayableHandle&,System.Int32,UnityEngine.Playables.PlayableHandle&,System.Int32)
		void Register_UnityEngine_Playables_PlayableGraph_ConnectInternal_Injected();
		Register_UnityEngine_Playables_PlayableGraph_ConnectInternal_Injected();

		//System.Boolean UnityEngine.Playables.PlayableGraph::CreateScriptOutputInternal_Injected(UnityEngine.Playables.PlayableGraph&,System.String,UnityEngine.Playables.PlayableOutputHandle&)
		void Register_UnityEngine_Playables_PlayableGraph_CreateScriptOutputInternal_Injected();
		Register_UnityEngine_Playables_PlayableGraph_CreateScriptOutputInternal_Injected();

		//System.Boolean UnityEngine.Playables.PlayableGraph::IsPlaying_Injected(UnityEngine.Playables.PlayableGraph&)
		void Register_UnityEngine_Playables_PlayableGraph_IsPlaying_Injected();
		Register_UnityEngine_Playables_PlayableGraph_IsPlaying_Injected();

		//System.Boolean UnityEngine.Playables.PlayableGraph::IsValid_Injected(UnityEngine.Playables.PlayableGraph&)
		void Register_UnityEngine_Playables_PlayableGraph_IsValid_Injected();
		Register_UnityEngine_Playables_PlayableGraph_IsValid_Injected();

		//System.Int32 UnityEngine.Playables.PlayableGraph::GetPlayableCount_Injected(UnityEngine.Playables.PlayableGraph&)
		void Register_UnityEngine_Playables_PlayableGraph_GetPlayableCount_Injected();
		Register_UnityEngine_Playables_PlayableGraph_GetPlayableCount_Injected();

		//System.Int32 UnityEngine.Playables.PlayableGraph::GetRootPlayableCount_Injected(UnityEngine.Playables.PlayableGraph&)
		void Register_UnityEngine_Playables_PlayableGraph_GetRootPlayableCount_Injected();
		Register_UnityEngine_Playables_PlayableGraph_GetRootPlayableCount_Injected();

		//System.Void UnityEngine.Playables.PlayableGraph::CreatePlayableHandle_Injected(UnityEngine.Playables.PlayableGraph&,UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Playables_PlayableGraph_CreatePlayableHandle_Injected();
		Register_UnityEngine_Playables_PlayableGraph_CreatePlayableHandle_Injected();

		//System.Void UnityEngine.Playables.PlayableGraph::GetRootPlayableInternal_Injected(UnityEngine.Playables.PlayableGraph&,System.Int32,UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Playables_PlayableGraph_GetRootPlayableInternal_Injected();
		Register_UnityEngine_Playables_PlayableGraph_GetRootPlayableInternal_Injected();

		//UnityEngine.IExposedPropertyTable UnityEngine.Playables.PlayableGraph::GetResolver_Injected(UnityEngine.Playables.PlayableGraph&)
		void Register_UnityEngine_Playables_PlayableGraph_GetResolver_Injected();
		Register_UnityEngine_Playables_PlayableGraph_GetResolver_Injected();

	//End Registrations for type : UnityEngine.Playables.PlayableGraph

	//Start Registrations for type : UnityEngine.Playables.PlayableHandle

		//System.Boolean UnityEngine.Playables.PlayableHandle::IsValid_Injected(UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Playables_PlayableHandle_IsValid_Injected();
		Register_UnityEngine_Playables_PlayableHandle_IsValid_Injected();

		//System.Double UnityEngine.Playables.PlayableHandle::GetPreviousTime_Injected(UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Playables_PlayableHandle_GetPreviousTime_Injected();
		Register_UnityEngine_Playables_PlayableHandle_GetPreviousTime_Injected();

		//System.Double UnityEngine.Playables.PlayableHandle::GetTime_Injected(UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Playables_PlayableHandle_GetTime_Injected();
		Register_UnityEngine_Playables_PlayableHandle_GetTime_Injected();

		//System.Int32 UnityEngine.Playables.PlayableHandle::GetInputCount_Injected(UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Playables_PlayableHandle_GetInputCount_Injected();
		Register_UnityEngine_Playables_PlayableHandle_GetInputCount_Injected();

		//System.Object UnityEngine.Playables.PlayableHandle::GetScriptInstance_Injected(UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Playables_PlayableHandle_GetScriptInstance_Injected();
		Register_UnityEngine_Playables_PlayableHandle_GetScriptInstance_Injected();

		//System.Single UnityEngine.Playables.PlayableHandle::GetInputWeightFromIndex_Injected(UnityEngine.Playables.PlayableHandle&,System.Int32)
		void Register_UnityEngine_Playables_PlayableHandle_GetInputWeightFromIndex_Injected();
		Register_UnityEngine_Playables_PlayableHandle_GetInputWeightFromIndex_Injected();

		//System.Type UnityEngine.Playables.PlayableHandle::GetPlayableType_Injected(UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Playables_PlayableHandle_GetPlayableType_Injected();
		Register_UnityEngine_Playables_PlayableHandle_GetPlayableType_Injected();

		//System.Void UnityEngine.Playables.PlayableHandle::GetGraph_Injected(UnityEngine.Playables.PlayableHandle&,UnityEngine.Playables.PlayableGraph&)
		void Register_UnityEngine_Playables_PlayableHandle_GetGraph_Injected();
		Register_UnityEngine_Playables_PlayableHandle_GetGraph_Injected();

		//System.Void UnityEngine.Playables.PlayableHandle::GetInputHandle_Injected(UnityEngine.Playables.PlayableHandle&,System.Int32,UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Playables_PlayableHandle_GetInputHandle_Injected();
		Register_UnityEngine_Playables_PlayableHandle_GetInputHandle_Injected();

		//System.Void UnityEngine.Playables.PlayableHandle::Pause_Injected(UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Playables_PlayableHandle_Pause_Injected();
		Register_UnityEngine_Playables_PlayableHandle_Pause_Injected();

		//System.Void UnityEngine.Playables.PlayableHandle::Play_Injected(UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Playables_PlayableHandle_Play_Injected();
		Register_UnityEngine_Playables_PlayableHandle_Play_Injected();

		//System.Void UnityEngine.Playables.PlayableHandle::SetDuration_Injected(UnityEngine.Playables.PlayableHandle&,System.Double)
		void Register_UnityEngine_Playables_PlayableHandle_SetDuration_Injected();
		Register_UnityEngine_Playables_PlayableHandle_SetDuration_Injected();

		//System.Void UnityEngine.Playables.PlayableHandle::SetInputCount_Injected(UnityEngine.Playables.PlayableHandle&,System.Int32)
		void Register_UnityEngine_Playables_PlayableHandle_SetInputCount_Injected();
		Register_UnityEngine_Playables_PlayableHandle_SetInputCount_Injected();

		//System.Void UnityEngine.Playables.PlayableHandle::SetInputWeightFromIndex_Injected(UnityEngine.Playables.PlayableHandle&,System.Int32,System.Single)
		void Register_UnityEngine_Playables_PlayableHandle_SetInputWeightFromIndex_Injected();
		Register_UnityEngine_Playables_PlayableHandle_SetInputWeightFromIndex_Injected();

		//System.Void UnityEngine.Playables.PlayableHandle::SetInputWeight_Injected(UnityEngine.Playables.PlayableHandle&,UnityEngine.Playables.PlayableHandle&,System.Single)
		void Register_UnityEngine_Playables_PlayableHandle_SetInputWeight_Injected();
		Register_UnityEngine_Playables_PlayableHandle_SetInputWeight_Injected();

		//System.Void UnityEngine.Playables.PlayableHandle::SetPropagateSetTime_Injected(UnityEngine.Playables.PlayableHandle&,System.Boolean)
		void Register_UnityEngine_Playables_PlayableHandle_SetPropagateSetTime_Injected();
		Register_UnityEngine_Playables_PlayableHandle_SetPropagateSetTime_Injected();

		//System.Void UnityEngine.Playables.PlayableHandle::SetScriptInstance_Injected(UnityEngine.Playables.PlayableHandle&,System.Object)
		void Register_UnityEngine_Playables_PlayableHandle_SetScriptInstance_Injected();
		Register_UnityEngine_Playables_PlayableHandle_SetScriptInstance_Injected();

		//System.Void UnityEngine.Playables.PlayableHandle::SetSpeed_Injected(UnityEngine.Playables.PlayableHandle&,System.Double)
		void Register_UnityEngine_Playables_PlayableHandle_SetSpeed_Injected();
		Register_UnityEngine_Playables_PlayableHandle_SetSpeed_Injected();

		//System.Void UnityEngine.Playables.PlayableHandle::SetTime_Injected(UnityEngine.Playables.PlayableHandle&,System.Double)
		void Register_UnityEngine_Playables_PlayableHandle_SetTime_Injected();
		Register_UnityEngine_Playables_PlayableHandle_SetTime_Injected();

		//UnityEngine.Playables.PlayState UnityEngine.Playables.PlayableHandle::GetPlayState_Injected(UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Playables_PlayableHandle_GetPlayState_Injected();
		Register_UnityEngine_Playables_PlayableHandle_GetPlayState_Injected();

	//End Registrations for type : UnityEngine.Playables.PlayableHandle

	//Start Registrations for type : UnityEngine.Playables.PlayableOutputHandle

		//System.Boolean UnityEngine.Playables.PlayableOutputHandle::IsValid_Injected(UnityEngine.Playables.PlayableOutputHandle&)
		void Register_UnityEngine_Playables_PlayableOutputHandle_IsValid_Injected();
		Register_UnityEngine_Playables_PlayableOutputHandle_IsValid_Injected();

		//System.Int32 UnityEngine.Playables.PlayableOutputHandle::GetSourceInputPort_Injected(UnityEngine.Playables.PlayableOutputHandle&)
		void Register_UnityEngine_Playables_PlayableOutputHandle_GetSourceInputPort_Injected();
		Register_UnityEngine_Playables_PlayableOutputHandle_GetSourceInputPort_Injected();

		//System.Type UnityEngine.Playables.PlayableOutputHandle::GetPlayableOutputType_Injected(UnityEngine.Playables.PlayableOutputHandle&)
		void Register_UnityEngine_Playables_PlayableOutputHandle_GetPlayableOutputType_Injected();
		Register_UnityEngine_Playables_PlayableOutputHandle_GetPlayableOutputType_Injected();

		//System.Void UnityEngine.Playables.PlayableOutputHandle::GetSourcePlayable_Injected(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Playables_PlayableOutputHandle_GetSourcePlayable_Injected();
		Register_UnityEngine_Playables_PlayableOutputHandle_GetSourcePlayable_Injected();

		//System.Void UnityEngine.Playables.PlayableOutputHandle::SetReferenceObject_Injected(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.Object)
		void Register_UnityEngine_Playables_PlayableOutputHandle_SetReferenceObject_Injected();
		Register_UnityEngine_Playables_PlayableOutputHandle_SetReferenceObject_Injected();

		//System.Void UnityEngine.Playables.PlayableOutputHandle::SetSourceInputPort_Injected(UnityEngine.Playables.PlayableOutputHandle&,System.Int32)
		void Register_UnityEngine_Playables_PlayableOutputHandle_SetSourceInputPort_Injected();
		Register_UnityEngine_Playables_PlayableOutputHandle_SetSourceInputPort_Injected();

		//System.Void UnityEngine.Playables.PlayableOutputHandle::SetSourcePlayable_Injected(UnityEngine.Playables.PlayableOutputHandle&,UnityEngine.Playables.PlayableHandle&)
		void Register_UnityEngine_Playables_PlayableOutputHandle_SetSourcePlayable_Injected();
		Register_UnityEngine_Playables_PlayableOutputHandle_SetSourcePlayable_Injected();

		//System.Void UnityEngine.Playables.PlayableOutputHandle::SetWeight_Injected(UnityEngine.Playables.PlayableOutputHandle&,System.Single)
		void Register_UnityEngine_Playables_PlayableOutputHandle_SetWeight_Injected();
		Register_UnityEngine_Playables_PlayableOutputHandle_SetWeight_Injected();

	//End Registrations for type : UnityEngine.Playables.PlayableOutputHandle

	//Start Registrations for type : UnityEngine.PlayerConnectionInternal

		//System.Boolean UnityEngine.PlayerConnectionInternal::IsConnected()
		void Register_UnityEngine_PlayerConnectionInternal_IsConnected();
		Register_UnityEngine_PlayerConnectionInternal_IsConnected();

		//System.Void UnityEngine.PlayerConnectionInternal::DisconnectAll()
		void Register_UnityEngine_PlayerConnectionInternal_DisconnectAll();
		Register_UnityEngine_PlayerConnectionInternal_DisconnectAll();

		//System.Void UnityEngine.PlayerConnectionInternal::Initialize()
		void Register_UnityEngine_PlayerConnectionInternal_Initialize();
		Register_UnityEngine_PlayerConnectionInternal_Initialize();

		//System.Void UnityEngine.PlayerConnectionInternal::PollInternal()
		void Register_UnityEngine_PlayerConnectionInternal_PollInternal();
		Register_UnityEngine_PlayerConnectionInternal_PollInternal();

		//System.Void UnityEngine.PlayerConnectionInternal::RegisterInternal(System.String)
		void Register_UnityEngine_PlayerConnectionInternal_RegisterInternal();
		Register_UnityEngine_PlayerConnectionInternal_RegisterInternal();

		//System.Void UnityEngine.PlayerConnectionInternal::SendMessage(System.String,System.Byte[],System.Int32)
		void Register_UnityEngine_PlayerConnectionInternal_SendMessage();
		Register_UnityEngine_PlayerConnectionInternal_SendMessage();

		//System.Void UnityEngine.PlayerConnectionInternal::UnregisterInternal(System.String)
		void Register_UnityEngine_PlayerConnectionInternal_UnregisterInternal();
		Register_UnityEngine_PlayerConnectionInternal_UnregisterInternal();

	//End Registrations for type : UnityEngine.PlayerConnectionInternal

	//Start Registrations for type : UnityEngine.PropertyNameUtils

		//System.Void UnityEngine.PropertyNameUtils::PropertyNameFromString_Injected(System.String,UnityEngine.PropertyName&)
		void Register_UnityEngine_PropertyNameUtils_PropertyNameFromString_Injected();
		Register_UnityEngine_PropertyNameUtils_PropertyNameFromString_Injected();

	//End Registrations for type : UnityEngine.PropertyNameUtils

	//Start Registrations for type : UnityEngine.QualitySettings

		//System.Int32 UnityEngine.QualitySettings::get_antiAliasing()
		void Register_UnityEngine_QualitySettings_get_antiAliasing();
		Register_UnityEngine_QualitySettings_get_antiAliasing();

		//UnityEngine.ColorSpace UnityEngine.QualitySettings::get_activeColorSpace()
		void Register_UnityEngine_QualitySettings_get_activeColorSpace();
		Register_UnityEngine_QualitySettings_get_activeColorSpace();

	//End Registrations for type : UnityEngine.QualitySettings

	//Start Registrations for type : UnityEngine.Quaternion

		//System.Void UnityEngine.Quaternion::AngleAxis_Injected(System.Single,UnityEngine.Vector3&,UnityEngine.Quaternion&)
		void Register_UnityEngine_Quaternion_AngleAxis_Injected();
		Register_UnityEngine_Quaternion_AngleAxis_Injected();

		//System.Void UnityEngine.Quaternion::FromToRotation_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
		void Register_UnityEngine_Quaternion_FromToRotation_Injected();
		Register_UnityEngine_Quaternion_FromToRotation_Injected();

		//System.Void UnityEngine.Quaternion::Internal_FromEulerRad_Injected(UnityEngine.Vector3&,UnityEngine.Quaternion&)
		void Register_UnityEngine_Quaternion_Internal_FromEulerRad_Injected();
		Register_UnityEngine_Quaternion_Internal_FromEulerRad_Injected();

		//System.Void UnityEngine.Quaternion::Internal_ToEulerRad_Injected(UnityEngine.Quaternion&,UnityEngine.Vector3&)
		void Register_UnityEngine_Quaternion_Internal_ToEulerRad_Injected();
		Register_UnityEngine_Quaternion_Internal_ToEulerRad_Injected();

		//System.Void UnityEngine.Quaternion::Inverse_Injected(UnityEngine.Quaternion&,UnityEngine.Quaternion&)
		void Register_UnityEngine_Quaternion_Inverse_Injected();
		Register_UnityEngine_Quaternion_Inverse_Injected();

		//System.Void UnityEngine.Quaternion::LookRotation_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
		void Register_UnityEngine_Quaternion_LookRotation_Injected();
		Register_UnityEngine_Quaternion_LookRotation_Injected();

		//System.Void UnityEngine.Quaternion::Slerp_Injected(UnityEngine.Quaternion&,UnityEngine.Quaternion&,System.Single,UnityEngine.Quaternion&)
		void Register_UnityEngine_Quaternion_Slerp_Injected();
		Register_UnityEngine_Quaternion_Slerp_Injected();

	//End Registrations for type : UnityEngine.Quaternion

	//Start Registrations for type : UnityEngine.Random

		//System.Int32 UnityEngine.Random::RandomRangeInt(System.Int32,System.Int32)
		void Register_UnityEngine_Random_RandomRangeInt();
		Register_UnityEngine_Random_RandomRangeInt();

		//System.Single UnityEngine.Random::Range(System.Single,System.Single)
		void Register_UnityEngine_Random_Range();
		Register_UnityEngine_Random_Range();

		//System.Single UnityEngine.Random::get_value()
		void Register_UnityEngine_Random_get_value();
		Register_UnityEngine_Random_get_value();

		//System.Void UnityEngine.Random::get_insideUnitSphere_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Random_get_insideUnitSphere_Injected();
		Register_UnityEngine_Random_get_insideUnitSphere_Injected();

		//System.Void UnityEngine.Random::get_onUnitSphere_Injected(UnityEngine.Vector3&)
		void Register_UnityEngine_Random_get_onUnitSphere_Injected();
		Register_UnityEngine_Random_get_onUnitSphere_Injected();

		//System.Void UnityEngine.Random::get_rotation_Injected(UnityEngine.Quaternion&)
		void Register_UnityEngine_Random_get_rotation_Injected();
		Register_UnityEngine_Random_get_rotation_Injected();

	//End Registrations for type : UnityEngine.Random

	//Start Registrations for type : UnityEngine.RectOffset

		//System.Int32 UnityEngine.RectOffset::get_bottom()
		void Register_UnityEngine_RectOffset_get_bottom();
		Register_UnityEngine_RectOffset_get_bottom();

		//System.Int32 UnityEngine.RectOffset::get_horizontal()
		void Register_UnityEngine_RectOffset_get_horizontal();
		Register_UnityEngine_RectOffset_get_horizontal();

		//System.Int32 UnityEngine.RectOffset::get_left()
		void Register_UnityEngine_RectOffset_get_left();
		Register_UnityEngine_RectOffset_get_left();

		//System.Int32 UnityEngine.RectOffset::get_right()
		void Register_UnityEngine_RectOffset_get_right();
		Register_UnityEngine_RectOffset_get_right();

		//System.Int32 UnityEngine.RectOffset::get_top()
		void Register_UnityEngine_RectOffset_get_top();
		Register_UnityEngine_RectOffset_get_top();

		//System.Int32 UnityEngine.RectOffset::get_vertical()
		void Register_UnityEngine_RectOffset_get_vertical();
		Register_UnityEngine_RectOffset_get_vertical();

		//System.Void UnityEngine.RectOffset::Cleanup()
		void Register_UnityEngine_RectOffset_Cleanup();
		Register_UnityEngine_RectOffset_Cleanup();

		//System.Void UnityEngine.RectOffset::Init()
		void Register_UnityEngine_RectOffset_Init();
		Register_UnityEngine_RectOffset_Init();

		//System.Void UnityEngine.RectOffset::set_bottom(System.Int32)
		void Register_UnityEngine_RectOffset_set_bottom();
		Register_UnityEngine_RectOffset_set_bottom();

		//System.Void UnityEngine.RectOffset::set_left(System.Int32)
		void Register_UnityEngine_RectOffset_set_left();
		Register_UnityEngine_RectOffset_set_left();

		//System.Void UnityEngine.RectOffset::set_right(System.Int32)
		void Register_UnityEngine_RectOffset_set_right();
		Register_UnityEngine_RectOffset_set_right();

		//System.Void UnityEngine.RectOffset::set_top(System.Int32)
		void Register_UnityEngine_RectOffset_set_top();
		Register_UnityEngine_RectOffset_set_top();

	//End Registrations for type : UnityEngine.RectOffset

	//Start Registrations for type : UnityEngine.RectTransform

		//System.Void UnityEngine.RectTransform::INTERNAL_get_anchorMax(UnityEngine.Vector2&)
		void Register_UnityEngine_RectTransform_INTERNAL_get_anchorMax();
		Register_UnityEngine_RectTransform_INTERNAL_get_anchorMax();

		//System.Void UnityEngine.RectTransform::INTERNAL_get_anchorMin(UnityEngine.Vector2&)
		void Register_UnityEngine_RectTransform_INTERNAL_get_anchorMin();
		Register_UnityEngine_RectTransform_INTERNAL_get_anchorMin();

		//System.Void UnityEngine.RectTransform::INTERNAL_get_anchoredPosition(UnityEngine.Vector2&)
		void Register_UnityEngine_RectTransform_INTERNAL_get_anchoredPosition();
		Register_UnityEngine_RectTransform_INTERNAL_get_anchoredPosition();

		//System.Void UnityEngine.RectTransform::INTERNAL_get_pivot(UnityEngine.Vector2&)
		void Register_UnityEngine_RectTransform_INTERNAL_get_pivot();
		Register_UnityEngine_RectTransform_INTERNAL_get_pivot();

		//System.Void UnityEngine.RectTransform::INTERNAL_get_rect(UnityEngine.Rect&)
		void Register_UnityEngine_RectTransform_INTERNAL_get_rect();
		Register_UnityEngine_RectTransform_INTERNAL_get_rect();

		//System.Void UnityEngine.RectTransform::INTERNAL_get_sizeDelta(UnityEngine.Vector2&)
		void Register_UnityEngine_RectTransform_INTERNAL_get_sizeDelta();
		Register_UnityEngine_RectTransform_INTERNAL_get_sizeDelta();

		//System.Void UnityEngine.RectTransform::INTERNAL_set_anchorMax(UnityEngine.Vector2&)
		void Register_UnityEngine_RectTransform_INTERNAL_set_anchorMax();
		Register_UnityEngine_RectTransform_INTERNAL_set_anchorMax();

		//System.Void UnityEngine.RectTransform::INTERNAL_set_anchorMin(UnityEngine.Vector2&)
		void Register_UnityEngine_RectTransform_INTERNAL_set_anchorMin();
		Register_UnityEngine_RectTransform_INTERNAL_set_anchorMin();

		//System.Void UnityEngine.RectTransform::INTERNAL_set_anchoredPosition(UnityEngine.Vector2&)
		void Register_UnityEngine_RectTransform_INTERNAL_set_anchoredPosition();
		Register_UnityEngine_RectTransform_INTERNAL_set_anchoredPosition();

		//System.Void UnityEngine.RectTransform::INTERNAL_set_pivot(UnityEngine.Vector2&)
		void Register_UnityEngine_RectTransform_INTERNAL_set_pivot();
		Register_UnityEngine_RectTransform_INTERNAL_set_pivot();

		//System.Void UnityEngine.RectTransform::INTERNAL_set_sizeDelta(UnityEngine.Vector2&)
		void Register_UnityEngine_RectTransform_INTERNAL_set_sizeDelta();
		Register_UnityEngine_RectTransform_INTERNAL_set_sizeDelta();

	//End Registrations for type : UnityEngine.RectTransform

	//Start Registrations for type : UnityEngine.RectTransformUtility

		//System.Boolean UnityEngine.RectTransformUtility::INTERNAL_CALL_RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2&,UnityEngine.Camera)
		void Register_UnityEngine_RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint();
		Register_UnityEngine_RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint();

		//System.Void UnityEngine.RectTransformUtility::INTERNAL_CALL_PixelAdjustPoint(UnityEngine.Vector2&,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
		void Register_UnityEngine_RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint();
		Register_UnityEngine_RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint();

		//System.Void UnityEngine.RectTransformUtility::INTERNAL_CALL_PixelAdjustRect(UnityEngine.RectTransform,UnityEngine.Canvas,UnityEngine.Rect&)
		void Register_UnityEngine_RectTransformUtility_INTERNAL_CALL_PixelAdjustRect();
		Register_UnityEngine_RectTransformUtility_INTERNAL_CALL_PixelAdjustRect();

	//End Registrations for type : UnityEngine.RectTransformUtility

	//Start Registrations for type : UnityEngine.RemoteConfigSettings

		//System.Void UnityEngine.RemoteConfigSettings::Internal_Destroy(System.IntPtr)
		void Register_UnityEngine_RemoteConfigSettings_Internal_Destroy();
		Register_UnityEngine_RemoteConfigSettings_Internal_Destroy();

	//End Registrations for type : UnityEngine.RemoteConfigSettings

	//Start Registrations for type : UnityEngine.Renderer

		//System.Int32 UnityEngine.Renderer::get_sortingLayerID()
		void Register_UnityEngine_Renderer_get_sortingLayerID();
		Register_UnityEngine_Renderer_get_sortingLayerID();

		//System.Int32 UnityEngine.Renderer::get_sortingOrder()
		void Register_UnityEngine_Renderer_get_sortingOrder();
		Register_UnityEngine_Renderer_get_sortingOrder();

		//System.Void UnityEngine.Renderer::Internal_SetPropertyBlock(UnityEngine.MaterialPropertyBlock)
		void Register_UnityEngine_Renderer_Internal_SetPropertyBlock();
		Register_UnityEngine_Renderer_Internal_SetPropertyBlock();

		//System.Void UnityEngine.Renderer::SetMaterial(UnityEngine.Material)
		void Register_UnityEngine_Renderer_SetMaterial();
		Register_UnityEngine_Renderer_SetMaterial();

		//System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
		void Register_UnityEngine_Renderer_set_enabled();
		Register_UnityEngine_Renderer_set_enabled();

		//UnityEngine.Material UnityEngine.Renderer::GetMaterial()
		void Register_UnityEngine_Renderer_GetMaterial();
		Register_UnityEngine_Renderer_GetMaterial();

		//UnityEngine.Material[] UnityEngine.Renderer::GetMaterialArray()
		void Register_UnityEngine_Renderer_GetMaterialArray();
		Register_UnityEngine_Renderer_GetMaterialArray();

	//End Registrations for type : UnityEngine.Renderer

	//Start Registrations for type : UnityEngine.Rendering.CommandBuffer

		//System.Void UnityEngine.Rendering.CommandBuffer::Clear()
		void Register_UnityEngine_Rendering_CommandBuffer_Clear();
		Register_UnityEngine_Rendering_CommandBuffer_Clear();

		//System.Void UnityEngine.Rendering.CommandBuffer::GetTemporaryRT(System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.FilterMode,UnityEngine.RenderTextureFormat,UnityEngine.RenderTextureReadWrite,System.Int32,System.Boolean,UnityEngine.RenderTextureMemoryless,System.Boolean)
		void Register_UnityEngine_Rendering_CommandBuffer_GetTemporaryRT();
		Register_UnityEngine_Rendering_CommandBuffer_GetTemporaryRT();

		//System.Void UnityEngine.Rendering.CommandBuffer::INTERNAL_CALL_Blit_Identifier(UnityEngine.Rendering.CommandBuffer,UnityEngine.Rendering.RenderTargetIdentifier&,UnityEngine.Rendering.RenderTargetIdentifier&,UnityEngine.Material,System.Int32,UnityEngine.Vector2&,UnityEngine.Vector2&)
		void Register_UnityEngine_Rendering_CommandBuffer_INTERNAL_CALL_Blit_Identifier();
		Register_UnityEngine_Rendering_CommandBuffer_INTERNAL_CALL_Blit_Identifier();

		//System.Void UnityEngine.Rendering.CommandBuffer::INTERNAL_CALL_Blit_Texture(UnityEngine.Rendering.CommandBuffer,UnityEngine.Texture,UnityEngine.Rendering.RenderTargetIdentifier&,UnityEngine.Material,System.Int32,UnityEngine.Vector2&,UnityEngine.Vector2&)
		void Register_UnityEngine_Rendering_CommandBuffer_INTERNAL_CALL_Blit_Texture();
		Register_UnityEngine_Rendering_CommandBuffer_INTERNAL_CALL_Blit_Texture();

		//System.Void UnityEngine.Rendering.CommandBuffer::INTERNAL_CALL_Internal_DrawMesh(UnityEngine.Rendering.CommandBuffer,UnityEngine.Mesh,UnityEngine.Matrix4x4&,UnityEngine.Material,System.Int32,System.Int32,UnityEngine.MaterialPropertyBlock)
		void Register_UnityEngine_Rendering_CommandBuffer_INTERNAL_CALL_Internal_DrawMesh();
		Register_UnityEngine_Rendering_CommandBuffer_INTERNAL_CALL_Internal_DrawMesh();

		//System.Void UnityEngine.Rendering.CommandBuffer::INTERNAL_CALL_SetGlobalVector(UnityEngine.Rendering.CommandBuffer,System.Int32,UnityEngine.Vector4&)
		void Register_UnityEngine_Rendering_CommandBuffer_INTERNAL_CALL_SetGlobalVector();
		Register_UnityEngine_Rendering_CommandBuffer_INTERNAL_CALL_SetGlobalVector();

		//System.Void UnityEngine.Rendering.CommandBuffer::InitBuffer(UnityEngine.Rendering.CommandBuffer)
		void Register_UnityEngine_Rendering_CommandBuffer_InitBuffer();
		Register_UnityEngine_Rendering_CommandBuffer_InitBuffer();

		//System.Void UnityEngine.Rendering.CommandBuffer::ReleaseBuffer()
		void Register_UnityEngine_Rendering_CommandBuffer_ReleaseBuffer();
		Register_UnityEngine_Rendering_CommandBuffer_ReleaseBuffer();

		//System.Void UnityEngine.Rendering.CommandBuffer::ReleaseTemporaryRT(System.Int32)
		void Register_UnityEngine_Rendering_CommandBuffer_ReleaseTemporaryRT();
		Register_UnityEngine_Rendering_CommandBuffer_ReleaseTemporaryRT();

		//System.Void UnityEngine.Rendering.CommandBuffer::SetGlobalFloat(System.Int32,System.Single)
		void Register_UnityEngine_Rendering_CommandBuffer_SetGlobalFloat();
		Register_UnityEngine_Rendering_CommandBuffer_SetGlobalFloat();

		//System.Void UnityEngine.Rendering.CommandBuffer::SetGlobalTexture_Impl(System.Int32,UnityEngine.Rendering.RenderTargetIdentifier&)
		void Register_UnityEngine_Rendering_CommandBuffer_SetGlobalTexture_Impl();
		Register_UnityEngine_Rendering_CommandBuffer_SetGlobalTexture_Impl();

		//System.Void UnityEngine.Rendering.CommandBuffer::SetRenderTarget_Multiple(UnityEngine.Rendering.RenderTargetIdentifier[],UnityEngine.Rendering.RenderTargetIdentifier&)
		void Register_UnityEngine_Rendering_CommandBuffer_SetRenderTarget_Multiple();
		Register_UnityEngine_Rendering_CommandBuffer_SetRenderTarget_Multiple();

		//System.Void UnityEngine.Rendering.CommandBuffer::set_name(System.String)
		void Register_UnityEngine_Rendering_CommandBuffer_set_name();
		Register_UnityEngine_Rendering_CommandBuffer_set_name();

	//End Registrations for type : UnityEngine.Rendering.CommandBuffer

	//Start Registrations for type : UnityEngine.RenderSettings

		//System.Boolean UnityEngine.RenderSettings::get_fog()
		void Register_UnityEngine_RenderSettings_get_fog();
		Register_UnityEngine_RenderSettings_get_fog();

		//System.Single UnityEngine.RenderSettings::get_fogDensity()
		void Register_UnityEngine_RenderSettings_get_fogDensity();
		Register_UnityEngine_RenderSettings_get_fogDensity();

		//System.Single UnityEngine.RenderSettings::get_fogEndDistance()
		void Register_UnityEngine_RenderSettings_get_fogEndDistance();
		Register_UnityEngine_RenderSettings_get_fogEndDistance();

		//System.Single UnityEngine.RenderSettings::get_fogStartDistance()
		void Register_UnityEngine_RenderSettings_get_fogStartDistance();
		Register_UnityEngine_RenderSettings_get_fogStartDistance();

		//System.Void UnityEngine.RenderSettings::get_fogColor_Injected(UnityEngine.Color&)
		void Register_UnityEngine_RenderSettings_get_fogColor_Injected();
		Register_UnityEngine_RenderSettings_get_fogColor_Injected();

		//System.Void UnityEngine.RenderSettings::set_ambientMode(UnityEngine.Rendering.AmbientMode)
		void Register_UnityEngine_RenderSettings_set_ambientMode();
		Register_UnityEngine_RenderSettings_set_ambientMode();

		//System.Void UnityEngine.RenderSettings::set_ambientProbe_Injected(UnityEngine.Rendering.SphericalHarmonicsL2&)
		void Register_UnityEngine_RenderSettings_set_ambientProbe_Injected();
		Register_UnityEngine_RenderSettings_set_ambientProbe_Injected();

		//UnityEngine.FogMode UnityEngine.RenderSettings::get_fogMode()
		void Register_UnityEngine_RenderSettings_get_fogMode();
		Register_UnityEngine_RenderSettings_get_fogMode();

	//End Registrations for type : UnityEngine.RenderSettings

	//Start Registrations for type : UnityEngine.RenderTexture

		//System.Boolean UnityEngine.RenderTexture::Create()
		void Register_UnityEngine_RenderTexture_Create();
		Register_UnityEngine_RenderTexture_Create();

		//System.Boolean UnityEngine.RenderTexture::IsCreated()
		void Register_UnityEngine_RenderTexture_IsCreated();
		Register_UnityEngine_RenderTexture_IsCreated();

		//System.Boolean UnityEngine.RenderTexture::get_sRGB()
		void Register_UnityEngine_RenderTexture_get_sRGB();
		Register_UnityEngine_RenderTexture_get_sRGB();

		//System.Int32 UnityEngine.RenderTexture::get_depth()
		void Register_UnityEngine_RenderTexture_get_depth();
		Register_UnityEngine_RenderTexture_get_depth();

		//System.Int32 UnityEngine.RenderTexture::get_height()
		void Register_UnityEngine_RenderTexture_get_height();
		Register_UnityEngine_RenderTexture_get_height();

		//System.Int32 UnityEngine.RenderTexture::get_width()
		void Register_UnityEngine_RenderTexture_get_width();
		Register_UnityEngine_RenderTexture_get_width();

		//System.Void UnityEngine.RenderTexture::GetColorBuffer(UnityEngine.RenderBuffer&)
		void Register_UnityEngine_RenderTexture_GetColorBuffer();
		Register_UnityEngine_RenderTexture_GetColorBuffer();

		//System.Void UnityEngine.RenderTexture::GetDepthBuffer(UnityEngine.RenderBuffer&)
		void Register_UnityEngine_RenderTexture_GetDepthBuffer();
		Register_UnityEngine_RenderTexture_GetDepthBuffer();

		//System.Void UnityEngine.RenderTexture::Internal_Create(UnityEngine.RenderTexture)
		void Register_UnityEngine_RenderTexture_Internal_Create();
		Register_UnityEngine_RenderTexture_Internal_Create();

		//System.Void UnityEngine.RenderTexture::Release()
		void Register_UnityEngine_RenderTexture_Release();
		Register_UnityEngine_RenderTexture_Release();

		//System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
		void Register_UnityEngine_RenderTexture_ReleaseTemporary();
		Register_UnityEngine_RenderTexture_ReleaseTemporary();

		//System.Void UnityEngine.RenderTexture::SetSRGBReadWrite(System.Boolean)
		void Register_UnityEngine_RenderTexture_SetSRGBReadWrite();
		Register_UnityEngine_RenderTexture_SetSRGBReadWrite();

		//System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
		void Register_UnityEngine_RenderTexture_set_active();
		Register_UnityEngine_RenderTexture_set_active();

		//System.Void UnityEngine.RenderTexture::set_antiAliasing(System.Int32)
		void Register_UnityEngine_RenderTexture_set_antiAliasing();
		Register_UnityEngine_RenderTexture_set_antiAliasing();

		//System.Void UnityEngine.RenderTexture::set_depth(System.Int32)
		void Register_UnityEngine_RenderTexture_set_depth();
		Register_UnityEngine_RenderTexture_set_depth();

		//System.Void UnityEngine.RenderTexture::set_format(UnityEngine.RenderTextureFormat)
		void Register_UnityEngine_RenderTexture_set_format();
		Register_UnityEngine_RenderTexture_set_format();

		//System.Void UnityEngine.RenderTexture::set_height(System.Int32)
		void Register_UnityEngine_RenderTexture_set_height();
		Register_UnityEngine_RenderTexture_set_height();

		//System.Void UnityEngine.RenderTexture::set_width(System.Int32)
		void Register_UnityEngine_RenderTexture_set_width();
		Register_UnityEngine_RenderTexture_set_width();

		//UnityEngine.RenderTexture UnityEngine.RenderTexture::INTERNAL_CALL_GetTemporary_Internal(UnityEngine.RenderTextureDescriptor&)
		void Register_UnityEngine_RenderTexture_INTERNAL_CALL_GetTemporary_Internal();
		Register_UnityEngine_RenderTexture_INTERNAL_CALL_GetTemporary_Internal();

		//UnityEngine.RenderTexture UnityEngine.RenderTexture::get_active()
		void Register_UnityEngine_RenderTexture_get_active();
		Register_UnityEngine_RenderTexture_get_active();

		//UnityEngine.RenderTextureFormat UnityEngine.RenderTexture::get_format()
		void Register_UnityEngine_RenderTexture_get_format();
		Register_UnityEngine_RenderTexture_get_format();

	//End Registrations for type : UnityEngine.RenderTexture

	//Start Registrations for type : UnityEngine.Resources

		//UnityEngine.Object UnityEngine.Resources::GetBuiltinResource(System.Type,System.String)
		void Register_UnityEngine_Resources_GetBuiltinResource();
		Register_UnityEngine_Resources_GetBuiltinResource();

		//UnityEngine.Object UnityEngine.Resources::Load(System.String,System.Type)
		void Register_UnityEngine_Resources_Load();
		Register_UnityEngine_Resources_Load();

		//UnityEngine.Object[] UnityEngine.Resources::FindObjectsOfTypeAll(System.Type)
		void Register_UnityEngine_Resources_FindObjectsOfTypeAll();
		Register_UnityEngine_Resources_FindObjectsOfTypeAll();

	//End Registrations for type : UnityEngine.Resources

	//Start Registrations for type : UnityEngine.Rigidbody

		//System.Void UnityEngine.Rigidbody::INTERNAL_CALL_AddRelativeTorque(UnityEngine.Rigidbody,UnityEngine.Vector3&,UnityEngine.ForceMode)
		void Register_UnityEngine_Rigidbody_INTERNAL_CALL_AddRelativeTorque();
		Register_UnityEngine_Rigidbody_INTERNAL_CALL_AddRelativeTorque();

		//System.Void UnityEngine.Rigidbody::INTERNAL_get_angularVelocity(UnityEngine.Vector3&)
		void Register_UnityEngine_Rigidbody_INTERNAL_get_angularVelocity();
		Register_UnityEngine_Rigidbody_INTERNAL_get_angularVelocity();

		//System.Void UnityEngine.Rigidbody::INTERNAL_set_velocity(UnityEngine.Vector3&)
		void Register_UnityEngine_Rigidbody_INTERNAL_set_velocity();
		Register_UnityEngine_Rigidbody_INTERNAL_set_velocity();

		//System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
		void Register_UnityEngine_Rigidbody_set_isKinematic();
		Register_UnityEngine_Rigidbody_set_isKinematic();

		//System.Void UnityEngine.Rigidbody::set_maxAngularVelocity(System.Single)
		void Register_UnityEngine_Rigidbody_set_maxAngularVelocity();
		Register_UnityEngine_Rigidbody_set_maxAngularVelocity();

	//End Registrations for type : UnityEngine.Rigidbody

	//Start Registrations for type : UnityEngine.SceneManagement.SceneManager

		//UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsyncNameIndexInternal(System.String,System.Int32,System.Boolean,System.Boolean)
		void Register_UnityEngine_SceneManagement_SceneManager_LoadSceneAsyncNameIndexInternal();
		Register_UnityEngine_SceneManagement_SceneManager_LoadSceneAsyncNameIndexInternal();

	//End Registrations for type : UnityEngine.SceneManagement.SceneManager

	//Start Registrations for type : UnityEngine.Screen

		//System.Int32 UnityEngine.Screen::get_height()
		void Register_UnityEngine_Screen_get_height();
		Register_UnityEngine_Screen_get_height();

		//System.Int32 UnityEngine.Screen::get_width()
		void Register_UnityEngine_Screen_get_width();
		Register_UnityEngine_Screen_get_width();

		//System.Single UnityEngine.Screen::get_dpi()
		void Register_UnityEngine_Screen_get_dpi();
		Register_UnityEngine_Screen_get_dpi();

		//System.Void UnityEngine.Screen::get_currentResolution_Injected(UnityEngine.Resolution&)
		void Register_UnityEngine_Screen_get_currentResolution_Injected();
		Register_UnityEngine_Screen_get_currentResolution_Injected();

	//End Registrations for type : UnityEngine.Screen

	//Start Registrations for type : UnityEngine.ScriptableObject

		//System.Void UnityEngine.ScriptableObject::CreateScriptableObject(UnityEngine.ScriptableObject)
		void Register_UnityEngine_ScriptableObject_CreateScriptableObject();
		Register_UnityEngine_ScriptableObject_CreateScriptableObject();

		//UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateScriptableObjectInstanceFromType(System.Type)
		void Register_UnityEngine_ScriptableObject_CreateScriptableObjectInstanceFromType();
		Register_UnityEngine_ScriptableObject_CreateScriptableObjectInstanceFromType();

	//End Registrations for type : UnityEngine.ScriptableObject

	//Start Registrations for type : UnityEngine.Shader

		//System.Int32 UnityEngine.Shader::PropertyToID(System.String)
		void Register_UnityEngine_Shader_PropertyToID();
		Register_UnityEngine_Shader_PropertyToID();

		//System.Void UnityEngine.Shader::DisableKeyword(System.String)
		void Register_UnityEngine_Shader_DisableKeyword();
		Register_UnityEngine_Shader_DisableKeyword();

		//System.Void UnityEngine.Shader::EnableKeyword(System.String)
		void Register_UnityEngine_Shader_EnableKeyword();
		Register_UnityEngine_Shader_EnableKeyword();

		//System.Void UnityEngine.Shader::SetGlobalTextureImpl(System.Int32,UnityEngine.Texture)
		void Register_UnityEngine_Shader_SetGlobalTextureImpl();
		Register_UnityEngine_Shader_SetGlobalTextureImpl();

		//System.Void UnityEngine.Shader::SetGlobalVectorImpl_Injected(System.Int32,UnityEngine.Vector4&)
		void Register_UnityEngine_Shader_SetGlobalVectorImpl_Injected();
		Register_UnityEngine_Shader_SetGlobalVectorImpl_Injected();

		//UnityEngine.Shader UnityEngine.Shader::Find(System.String)
		void Register_UnityEngine_Shader_Find();
		Register_UnityEngine_Shader_Find();

	//End Registrations for type : UnityEngine.Shader

	//Start Registrations for type : UnityEngine.SkinnedMeshRenderer

		//System.Void UnityEngine.SkinnedMeshRenderer::SetBlendShapeWeight(System.Int32,System.Single)
		void Register_UnityEngine_SkinnedMeshRenderer_SetBlendShapeWeight();
		Register_UnityEngine_SkinnedMeshRenderer_SetBlendShapeWeight();

		//UnityEngine.Mesh UnityEngine.SkinnedMeshRenderer::get_sharedMesh()
		void Register_UnityEngine_SkinnedMeshRenderer_get_sharedMesh();
		Register_UnityEngine_SkinnedMeshRenderer_get_sharedMesh();

	//End Registrations for type : UnityEngine.SkinnedMeshRenderer

	//Start Registrations for type : UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform

		//System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::GetAuthenticated()
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_GetAuthenticated();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_GetAuthenticated();

		//System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::GetIsUnderage()
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_GetIsUnderage();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_GetIsUnderage();

		//System.String UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserID()
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Internal_UserID();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Internal_UserID();

		//System.String UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserName()
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Internal_UserName();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Internal_UserName();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Authenticate()
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Authenticate();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Authenticate();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::InternalLoadAchievementDescriptions(System.Object)
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_InternalLoadAchievementDescriptions();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_InternalLoadAchievementDescriptions();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::InternalLoadAchievements(System.Object)
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_InternalLoadAchievements();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_InternalLoadAchievements();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::InternalLoadScores(System.String,System.Object)
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_InternalLoadScores();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_InternalLoadScores();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::InternalReportProgress(System.String,System.Double,System.Object)
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_InternalReportProgress();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_InternalReportProgress();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::InternalReportScore(System.Int64,System.String,System.Object)
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_InternalReportScore();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_InternalReportScore();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadUsers(System.String[],System.Object)
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Internal_LoadUsers();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Internal_LoadUsers();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowAchievementsUI()
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Internal_ShowAchievementsUI();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Internal_ShowAchievementsUI();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowLeaderboardUI()
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Internal_ShowLeaderboardUI();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_Internal_ShowLeaderboardUI();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadFriends(System.Object)
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_LoadFriends();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_LoadFriends();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ResetAllAchievements()
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_ResetAllAchievements();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_ResetAllAchievements();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowDefaultAchievementBanner(System.Boolean)
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_ShowDefaultAchievementBanner();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_ShowDefaultAchievementBanner();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowSpecificLeaderboardUI(System.String,System.Int32)
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_ShowSpecificLeaderboardUI();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_ShowSpecificLeaderboardUI();

		//UnityEngine.Texture2D UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::GetUserImage()
		void Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_GetUserImage();
		Register_UnityEngine_SocialPlatforms_GameCenter_GameCenterPlatform_GetUserImage();

	//End Registrations for type : UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform

	//Start Registrations for type : UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard

		//System.Boolean UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::GcLeaderboard_Loading(System.IntPtr)
		void Register_UnityEngine_SocialPlatforms_GameCenter_GcLeaderboard_GcLeaderboard_Loading();
		Register_UnityEngine_SocialPlatforms_GameCenter_GcLeaderboard_GcLeaderboard_Loading();

		//System.IntPtr UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::GcLeaderboard_LoadScores(System.Object,System.String,System.Int32,System.Int32,System.String[],System.Int32,System.Int32,System.Object)
		void Register_UnityEngine_SocialPlatforms_GameCenter_GcLeaderboard_GcLeaderboard_LoadScores();
		Register_UnityEngine_SocialPlatforms_GameCenter_GcLeaderboard_GcLeaderboard_LoadScores();

		//System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::GcLeaderboard_Dispose(System.IntPtr)
		void Register_UnityEngine_SocialPlatforms_GameCenter_GcLeaderboard_GcLeaderboard_Dispose();
		Register_UnityEngine_SocialPlatforms_GameCenter_GcLeaderboard_GcLeaderboard_Dispose();

	//End Registrations for type : UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard

	//Start Registrations for type : UnityEngine.SortingLayer

		//System.Int32 UnityEngine.SortingLayer::GetLayerValueFromID(System.Int32)
		void Register_UnityEngine_SortingLayer_GetLayerValueFromID();
		Register_UnityEngine_SortingLayer_GetLayerValueFromID();

	//End Registrations for type : UnityEngine.SortingLayer

	//Start Registrations for type : UnityEngine.SphereCollider

		//System.Single UnityEngine.SphereCollider::get_radius()
		void Register_UnityEngine_SphereCollider_get_radius();
		Register_UnityEngine_SphereCollider_get_radius();

		//System.Void UnityEngine.SphereCollider::set_radius(System.Single)
		void Register_UnityEngine_SphereCollider_set_radius();
		Register_UnityEngine_SphereCollider_set_radius();

	//End Registrations for type : UnityEngine.SphereCollider

	//Start Registrations for type : UnityEngine.Sprite

		//System.Boolean UnityEngine.Sprite::get_packed()
		void Register_UnityEngine_Sprite_get_packed();
		Register_UnityEngine_Sprite_get_packed();

		//System.Single UnityEngine.Sprite::get_pixelsPerUnit()
		void Register_UnityEngine_Sprite_get_pixelsPerUnit();
		Register_UnityEngine_Sprite_get_pixelsPerUnit();

		//System.Void UnityEngine.Sprite::INTERNAL_get_border(UnityEngine.Vector4&)
		void Register_UnityEngine_Sprite_INTERNAL_get_border();
		Register_UnityEngine_Sprite_INTERNAL_get_border();

		//System.Void UnityEngine.Sprite::INTERNAL_get_rect(UnityEngine.Rect&)
		void Register_UnityEngine_Sprite_INTERNAL_get_rect();
		Register_UnityEngine_Sprite_INTERNAL_get_rect();

		//System.Void UnityEngine.Sprite::INTERNAL_get_textureRect(UnityEngine.Rect&)
		void Register_UnityEngine_Sprite_INTERNAL_get_textureRect();
		Register_UnityEngine_Sprite_INTERNAL_get_textureRect();

		//UnityEngine.Sprite UnityEngine.Sprite::INTERNAL_CALL_Create(UnityEngine.Texture2D,UnityEngine.Rect&,UnityEngine.Vector2&,System.Single,System.UInt32,UnityEngine.SpriteMeshType,UnityEngine.Vector4&,System.Boolean)
		void Register_UnityEngine_Sprite_INTERNAL_CALL_Create();
		Register_UnityEngine_Sprite_INTERNAL_CALL_Create();

		//UnityEngine.Texture2D UnityEngine.Sprite::get_associatedAlphaSplitTexture()
		void Register_UnityEngine_Sprite_get_associatedAlphaSplitTexture();
		Register_UnityEngine_Sprite_get_associatedAlphaSplitTexture();

		//UnityEngine.Texture2D UnityEngine.Sprite::get_texture()
		void Register_UnityEngine_Sprite_get_texture();
		Register_UnityEngine_Sprite_get_texture();

	//End Registrations for type : UnityEngine.Sprite

	//Start Registrations for type : UnityEngine.Sprites.DataUtility

		//System.Void UnityEngine.Sprites.DataUtility::INTERNAL_CALL_GetInnerUV(UnityEngine.Sprite,UnityEngine.Vector4&)
		void Register_UnityEngine_Sprites_DataUtility_INTERNAL_CALL_GetInnerUV();
		Register_UnityEngine_Sprites_DataUtility_INTERNAL_CALL_GetInnerUV();

		//System.Void UnityEngine.Sprites.DataUtility::INTERNAL_CALL_GetOuterUV(UnityEngine.Sprite,UnityEngine.Vector4&)
		void Register_UnityEngine_Sprites_DataUtility_INTERNAL_CALL_GetOuterUV();
		Register_UnityEngine_Sprites_DataUtility_INTERNAL_CALL_GetOuterUV();

		//System.Void UnityEngine.Sprites.DataUtility::INTERNAL_CALL_GetPadding(UnityEngine.Sprite,UnityEngine.Vector4&)
		void Register_UnityEngine_Sprites_DataUtility_INTERNAL_CALL_GetPadding();
		Register_UnityEngine_Sprites_DataUtility_INTERNAL_CALL_GetPadding();

		//System.Void UnityEngine.Sprites.DataUtility::Internal_GetMinSize(UnityEngine.Sprite,UnityEngine.Vector2&)
		void Register_UnityEngine_Sprites_DataUtility_Internal_GetMinSize();
		Register_UnityEngine_Sprites_DataUtility_Internal_GetMinSize();

	//End Registrations for type : UnityEngine.Sprites.DataUtility

	//Start Registrations for type : UnityEngine.SystemInfo

		//System.Boolean UnityEngine.SystemInfo::HasRenderTextureNative(UnityEngine.RenderTextureFormat)
		void Register_UnityEngine_SystemInfo_HasRenderTextureNative();
		Register_UnityEngine_SystemInfo_HasRenderTextureNative();

		//System.Boolean UnityEngine.SystemInfo::SupportsComputeShaders()
		void Register_UnityEngine_SystemInfo_SupportsComputeShaders();
		Register_UnityEngine_SystemInfo_SupportsComputeShaders();

		//System.Boolean UnityEngine.SystemInfo::SupportsMotionVectors()
		void Register_UnityEngine_SystemInfo_SupportsMotionVectors();
		Register_UnityEngine_SystemInfo_SupportsMotionVectors();

		//System.Boolean UnityEngine.SystemInfo::SupportsTextureFormatNative(UnityEngine.TextureFormat)
		void Register_UnityEngine_SystemInfo_SupportsTextureFormatNative();
		Register_UnityEngine_SystemInfo_SupportsTextureFormatNative();

		//System.Int32 UnityEngine.SystemInfo::GetGraphicsShaderLevel()
		void Register_UnityEngine_SystemInfo_GetGraphicsShaderLevel();
		Register_UnityEngine_SystemInfo_GetGraphicsShaderLevel();

		//System.Int32 UnityEngine.SystemInfo::SupportedRenderTargetCount()
		void Register_UnityEngine_SystemInfo_SupportedRenderTargetCount();
		Register_UnityEngine_SystemInfo_SupportedRenderTargetCount();

		//System.String UnityEngine.SystemInfo::GetGraphicsDeviceName()
		void Register_UnityEngine_SystemInfo_GetGraphicsDeviceName();
		Register_UnityEngine_SystemInfo_GetGraphicsDeviceName();

		//UnityEngine.DeviceType UnityEngine.SystemInfo::GetDeviceType()
		void Register_UnityEngine_SystemInfo_GetDeviceType();
		Register_UnityEngine_SystemInfo_GetDeviceType();

		//UnityEngine.OperatingSystemFamily UnityEngine.SystemInfo::GetOperatingSystemFamily()
		void Register_UnityEngine_SystemInfo_GetOperatingSystemFamily();
		Register_UnityEngine_SystemInfo_GetOperatingSystemFamily();

		//UnityEngine.Rendering.GraphicsDeviceType UnityEngine.SystemInfo::GetGraphicsDeviceType()
		void Register_UnityEngine_SystemInfo_GetGraphicsDeviceType();
		Register_UnityEngine_SystemInfo_GetGraphicsDeviceType();

	//End Registrations for type : UnityEngine.SystemInfo

	//Start Registrations for type : UnityEngine.TerrainData

		//System.Int32 UnityEngine.TerrainData::GetBoundaryValue(UnityEngine.TerrainData/BoundaryValueType)
		void Register_UnityEngine_TerrainData_GetBoundaryValue();
		Register_UnityEngine_TerrainData_GetBoundaryValue();

		//System.Single UnityEngine.TerrainData::GetAlphamapResolutionInternal()
		void Register_UnityEngine_TerrainData_GetAlphamapResolutionInternal();
		Register_UnityEngine_TerrainData_GetAlphamapResolutionInternal();

	//End Registrations for type : UnityEngine.TerrainData

	//Start Registrations for type : UnityEngine.TextGenerator

		//System.Boolean UnityEngine.TextGenerator::INTERNAL_CALL_Populate_Internal_cpp(UnityEngine.TextGenerator,System.String,UnityEngine.Font,UnityEngine.Color&,System.Int32,System.Single,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean,System.Boolean,System.UInt32&)
		void Register_UnityEngine_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp();
		Register_UnityEngine_TextGenerator_INTERNAL_CALL_Populate_Internal_cpp();

		//System.Int32 UnityEngine.TextGenerator::get_characterCount()
		void Register_UnityEngine_TextGenerator_get_characterCount();
		Register_UnityEngine_TextGenerator_get_characterCount();

		//System.Int32 UnityEngine.TextGenerator::get_lineCount()
		void Register_UnityEngine_TextGenerator_get_lineCount();
		Register_UnityEngine_TextGenerator_get_lineCount();

		//System.Void UnityEngine.TextGenerator::Dispose_cpp()
		void Register_UnityEngine_TextGenerator_Dispose_cpp();
		Register_UnityEngine_TextGenerator_Dispose_cpp();

		//System.Void UnityEngine.TextGenerator::GetCharactersInternal(System.Object)
		void Register_UnityEngine_TextGenerator_GetCharactersInternal();
		Register_UnityEngine_TextGenerator_GetCharactersInternal();

		//System.Void UnityEngine.TextGenerator::GetLinesInternal(System.Object)
		void Register_UnityEngine_TextGenerator_GetLinesInternal();
		Register_UnityEngine_TextGenerator_GetLinesInternal();

		//System.Void UnityEngine.TextGenerator::GetVerticesInternal(System.Object)
		void Register_UnityEngine_TextGenerator_GetVerticesInternal();
		Register_UnityEngine_TextGenerator_GetVerticesInternal();

		//System.Void UnityEngine.TextGenerator::INTERNAL_get_rectExtents(UnityEngine.Rect&)
		void Register_UnityEngine_TextGenerator_INTERNAL_get_rectExtents();
		Register_UnityEngine_TextGenerator_INTERNAL_get_rectExtents();

		//System.Void UnityEngine.TextGenerator::Init()
		void Register_UnityEngine_TextGenerator_Init();
		Register_UnityEngine_TextGenerator_Init();

	//End Registrations for type : UnityEngine.TextGenerator

	//Start Registrations for type : UnityEngine.Texture

		//System.Int32 UnityEngine.Texture::GetDataHeight()
		void Register_UnityEngine_Texture_GetDataHeight();
		Register_UnityEngine_Texture_GetDataHeight();

		//System.Int32 UnityEngine.Texture::GetDataWidth()
		void Register_UnityEngine_Texture_GetDataWidth();
		Register_UnityEngine_Texture_GetDataWidth();

		//System.Void UnityEngine.Texture::get_texelSize_Injected(UnityEngine.Vector2&)
		void Register_UnityEngine_Texture_get_texelSize_Injected();
		Register_UnityEngine_Texture_get_texelSize_Injected();

		//System.Void UnityEngine.Texture::set_anisoLevel(System.Int32)
		void Register_UnityEngine_Texture_set_anisoLevel();
		Register_UnityEngine_Texture_set_anisoLevel();

		//System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
		void Register_UnityEngine_Texture_set_filterMode();
		Register_UnityEngine_Texture_set_filterMode();

		//System.Void UnityEngine.Texture::set_wrapMode(UnityEngine.TextureWrapMode)
		void Register_UnityEngine_Texture_set_wrapMode();
		Register_UnityEngine_Texture_set_wrapMode();

		//UnityEngine.FilterMode UnityEngine.Texture::get_filterMode()
		void Register_UnityEngine_Texture_get_filterMode();
		Register_UnityEngine_Texture_get_filterMode();

		//UnityEngine.TextureWrapMode UnityEngine.Texture::get_wrapMode()
		void Register_UnityEngine_Texture_get_wrapMode();
		Register_UnityEngine_Texture_get_wrapMode();

	//End Registrations for type : UnityEngine.Texture

	//Start Registrations for type : UnityEngine.Texture2D

		//System.Boolean UnityEngine.Texture2D::Internal_CreateImpl(UnityEngine.Texture2D,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean,System.IntPtr)
		void Register_UnityEngine_Texture2D_Internal_CreateImpl();
		Register_UnityEngine_Texture2D_Internal_CreateImpl();

		//System.Boolean UnityEngine.Texture2D::IsReadable()
		void Register_UnityEngine_Texture2D_IsReadable();
		Register_UnityEngine_Texture2D_IsReadable();

		//System.Void UnityEngine.Texture2D::ApplyImpl(System.Boolean,System.Boolean)
		void Register_UnityEngine_Texture2D_ApplyImpl();
		Register_UnityEngine_Texture2D_ApplyImpl();

		//System.Void UnityEngine.Texture2D::GetPixelBilinearImpl_Injected(System.Int32,System.Single,System.Single,UnityEngine.Color&)
		void Register_UnityEngine_Texture2D_GetPixelBilinearImpl_Injected();
		Register_UnityEngine_Texture2D_GetPixelBilinearImpl_Injected();

		//System.Void UnityEngine.Texture2D::SetAllPixels32(UnityEngine.Color32[],System.Int32)
		void Register_UnityEngine_Texture2D_SetAllPixels32();
		Register_UnityEngine_Texture2D_SetAllPixels32();

		//System.Void UnityEngine.Texture2D::SetBlockOfPixels32(System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Color32[],System.Int32)
		void Register_UnityEngine_Texture2D_SetBlockOfPixels32();
		Register_UnityEngine_Texture2D_SetBlockOfPixels32();

		//System.Void UnityEngine.Texture2D::SetPixelImpl_Injected(System.Int32,System.Int32,System.Int32,UnityEngine.Color&)
		void Register_UnityEngine_Texture2D_SetPixelImpl_Injected();
		Register_UnityEngine_Texture2D_SetPixelImpl_Injected();

		//System.Void UnityEngine.Texture2D::SetPixelsImpl(System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Color[],System.Int32,System.Int32)
		void Register_UnityEngine_Texture2D_SetPixelsImpl();
		Register_UnityEngine_Texture2D_SetPixelsImpl();

		//System.Void UnityEngine.Texture2D::UpdateExternalTexture(System.IntPtr)
		void Register_UnityEngine_Texture2D_UpdateExternalTexture();
		Register_UnityEngine_Texture2D_UpdateExternalTexture();

		//UnityEngine.Texture2D UnityEngine.Texture2D::get_whiteTexture()
		void Register_UnityEngine_Texture2D_get_whiteTexture();
		Register_UnityEngine_Texture2D_get_whiteTexture();

	//End Registrations for type : UnityEngine.Texture2D

	//Start Registrations for type : UnityEngine.Tilemaps.Tilemap

		//System.Void UnityEngine.Tilemaps.Tilemap::RefreshTile_Injected(UnityEngine.Vector3Int&)
		void Register_UnityEngine_Tilemaps_Tilemap_RefreshTile_Injected();
		Register_UnityEngine_Tilemaps_Tilemap_RefreshTile_Injected();

	//End Registrations for type : UnityEngine.Tilemaps.Tilemap

	//Start Registrations for type : UnityEngine.Time

		//System.Int32 UnityEngine.Time::get_frameCount()
		void Register_UnityEngine_Time_get_frameCount();
		Register_UnityEngine_Time_get_frameCount();

		//System.Single UnityEngine.Time::get_deltaTime()
		void Register_UnityEngine_Time_get_deltaTime();
		Register_UnityEngine_Time_get_deltaTime();

		//System.Single UnityEngine.Time::get_fixedDeltaTime()
		void Register_UnityEngine_Time_get_fixedDeltaTime();
		Register_UnityEngine_Time_get_fixedDeltaTime();

		//System.Single UnityEngine.Time::get_realtimeSinceStartup()
		void Register_UnityEngine_Time_get_realtimeSinceStartup();
		Register_UnityEngine_Time_get_realtimeSinceStartup();

		//System.Single UnityEngine.Time::get_time()
		void Register_UnityEngine_Time_get_time();
		Register_UnityEngine_Time_get_time();

		//System.Single UnityEngine.Time::get_unscaledDeltaTime()
		void Register_UnityEngine_Time_get_unscaledDeltaTime();
		Register_UnityEngine_Time_get_unscaledDeltaTime();

		//System.Single UnityEngine.Time::get_unscaledTime()
		void Register_UnityEngine_Time_get_unscaledTime();
		Register_UnityEngine_Time_get_unscaledTime();

		//System.Void UnityEngine.Time::set_timeScale(System.Single)
		void Register_UnityEngine_Time_set_timeScale();
		Register_UnityEngine_Time_set_timeScale();

	//End Registrations for type : UnityEngine.Time

	//Start Registrations for type : UnityEngine.TouchScreenKeyboard

		//System.Boolean UnityEngine.TouchScreenKeyboard::get_active()
		void Register_UnityEngine_TouchScreenKeyboard_get_active();
		Register_UnityEngine_TouchScreenKeyboard_get_active();

		//System.Boolean UnityEngine.TouchScreenKeyboard::get_canGetSelection()
		void Register_UnityEngine_TouchScreenKeyboard_get_canGetSelection();
		Register_UnityEngine_TouchScreenKeyboard_get_canGetSelection();

		//System.Boolean UnityEngine.TouchScreenKeyboard::get_canSetSelection()
		void Register_UnityEngine_TouchScreenKeyboard_get_canSetSelection();
		Register_UnityEngine_TouchScreenKeyboard_get_canSetSelection();

		//System.String UnityEngine.TouchScreenKeyboard::get_text()
		void Register_UnityEngine_TouchScreenKeyboard_get_text();
		Register_UnityEngine_TouchScreenKeyboard_get_text();

		//System.Void UnityEngine.TouchScreenKeyboard::Destroy()
		void Register_UnityEngine_TouchScreenKeyboard_Destroy();
		Register_UnityEngine_TouchScreenKeyboard_Destroy();

		//System.Void UnityEngine.TouchScreenKeyboard::GetSelectionInternal(System.Int32&,System.Int32&)
		void Register_UnityEngine_TouchScreenKeyboard_GetSelectionInternal();
		Register_UnityEngine_TouchScreenKeyboard_GetSelectionInternal();

		//System.Void UnityEngine.TouchScreenKeyboard::SetSelectionInternal(System.Int32,System.Int32)
		void Register_UnityEngine_TouchScreenKeyboard_SetSelectionInternal();
		Register_UnityEngine_TouchScreenKeyboard_SetSelectionInternal();

		//System.Void UnityEngine.TouchScreenKeyboard::TouchScreenKeyboard_InternalConstructorHelper(UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments&,System.String,System.String)
		void Register_UnityEngine_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper();
		Register_UnityEngine_TouchScreenKeyboard_TouchScreenKeyboard_InternalConstructorHelper();

		//System.Void UnityEngine.TouchScreenKeyboard::set_active(System.Boolean)
		void Register_UnityEngine_TouchScreenKeyboard_set_active();
		Register_UnityEngine_TouchScreenKeyboard_set_active();

		//System.Void UnityEngine.TouchScreenKeyboard::set_characterLimit(System.Int32)
		void Register_UnityEngine_TouchScreenKeyboard_set_characterLimit();
		Register_UnityEngine_TouchScreenKeyboard_set_characterLimit();

		//System.Void UnityEngine.TouchScreenKeyboard::set_hideInput(System.Boolean)
		void Register_UnityEngine_TouchScreenKeyboard_set_hideInput();
		Register_UnityEngine_TouchScreenKeyboard_set_hideInput();

		//System.Void UnityEngine.TouchScreenKeyboard::set_text(System.String)
		void Register_UnityEngine_TouchScreenKeyboard_set_text();
		Register_UnityEngine_TouchScreenKeyboard_set_text();

		//UnityEngine.TouchScreenKeyboard/Status UnityEngine.TouchScreenKeyboard::get_status()
		void Register_UnityEngine_TouchScreenKeyboard_get_status();
		Register_UnityEngine_TouchScreenKeyboard_get_status();

	//End Registrations for type : UnityEngine.TouchScreenKeyboard

	//Start Registrations for type : UnityEngine.Transform

		//System.Boolean UnityEngine.Transform::IsChildOf(UnityEngine.Transform)
		void Register_UnityEngine_Transform_IsChildOf();
		Register_UnityEngine_Transform_IsChildOf();

		//System.Boolean UnityEngine.Transform::get_hasChanged()
		void Register_UnityEngine_Transform_get_hasChanged();
		Register_UnityEngine_Transform_get_hasChanged();

		//System.Int32 UnityEngine.Transform::get_childCount()
		void Register_UnityEngine_Transform_get_childCount();
		Register_UnityEngine_Transform_get_childCount();

		//System.Void UnityEngine.Transform::INTERNAL_CALL_InverseTransformDirection(UnityEngine.Transform,UnityEngine.Vector3&,UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_INTERNAL_CALL_InverseTransformDirection();
		Register_UnityEngine_Transform_INTERNAL_CALL_InverseTransformDirection();

		//System.Void UnityEngine.Transform::INTERNAL_CALL_InverseTransformPoint(UnityEngine.Transform,UnityEngine.Vector3&,UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_INTERNAL_CALL_InverseTransformPoint();
		Register_UnityEngine_Transform_INTERNAL_CALL_InverseTransformPoint();

		//System.Void UnityEngine.Transform::INTERNAL_CALL_LookAt(UnityEngine.Transform,UnityEngine.Vector3&,UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_INTERNAL_CALL_LookAt();
		Register_UnityEngine_Transform_INTERNAL_CALL_LookAt();

		//System.Void UnityEngine.Transform::INTERNAL_CALL_RotateAroundInternal(UnityEngine.Transform,UnityEngine.Vector3&,System.Single)
		void Register_UnityEngine_Transform_INTERNAL_CALL_RotateAroundInternal();
		Register_UnityEngine_Transform_INTERNAL_CALL_RotateAroundInternal();

		//System.Void UnityEngine.Transform::INTERNAL_CALL_TransformDirection(UnityEngine.Transform,UnityEngine.Vector3&,UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_INTERNAL_CALL_TransformDirection();
		Register_UnityEngine_Transform_INTERNAL_CALL_TransformDirection();

		//System.Void UnityEngine.Transform::INTERNAL_CALL_TransformPoint(UnityEngine.Transform,UnityEngine.Vector3&,UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_INTERNAL_CALL_TransformPoint();
		Register_UnityEngine_Transform_INTERNAL_CALL_TransformPoint();

		//System.Void UnityEngine.Transform::INTERNAL_get_localPosition(UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_INTERNAL_get_localPosition();
		Register_UnityEngine_Transform_INTERNAL_get_localPosition();

		//System.Void UnityEngine.Transform::INTERNAL_get_localRotation(UnityEngine.Quaternion&)
		void Register_UnityEngine_Transform_INTERNAL_get_localRotation();
		Register_UnityEngine_Transform_INTERNAL_get_localRotation();

		//System.Void UnityEngine.Transform::INTERNAL_get_localScale(UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_INTERNAL_get_localScale();
		Register_UnityEngine_Transform_INTERNAL_get_localScale();

		//System.Void UnityEngine.Transform::INTERNAL_get_localToWorldMatrix(UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Transform_INTERNAL_get_localToWorldMatrix();
		Register_UnityEngine_Transform_INTERNAL_get_localToWorldMatrix();

		//System.Void UnityEngine.Transform::INTERNAL_get_lossyScale(UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_INTERNAL_get_lossyScale();
		Register_UnityEngine_Transform_INTERNAL_get_lossyScale();

		//System.Void UnityEngine.Transform::INTERNAL_get_position(UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_INTERNAL_get_position();
		Register_UnityEngine_Transform_INTERNAL_get_position();

		//System.Void UnityEngine.Transform::INTERNAL_get_rotation(UnityEngine.Quaternion&)
		void Register_UnityEngine_Transform_INTERNAL_get_rotation();
		Register_UnityEngine_Transform_INTERNAL_get_rotation();

		//System.Void UnityEngine.Transform::INTERNAL_get_worldToLocalMatrix(UnityEngine.Matrix4x4&)
		void Register_UnityEngine_Transform_INTERNAL_get_worldToLocalMatrix();
		Register_UnityEngine_Transform_INTERNAL_get_worldToLocalMatrix();

		//System.Void UnityEngine.Transform::INTERNAL_set_localPosition(UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_INTERNAL_set_localPosition();
		Register_UnityEngine_Transform_INTERNAL_set_localPosition();

		//System.Void UnityEngine.Transform::INTERNAL_set_localRotation(UnityEngine.Quaternion&)
		void Register_UnityEngine_Transform_INTERNAL_set_localRotation();
		Register_UnityEngine_Transform_INTERNAL_set_localRotation();

		//System.Void UnityEngine.Transform::INTERNAL_set_localScale(UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_INTERNAL_set_localScale();
		Register_UnityEngine_Transform_INTERNAL_set_localScale();

		//System.Void UnityEngine.Transform::INTERNAL_set_position(UnityEngine.Vector3&)
		void Register_UnityEngine_Transform_INTERNAL_set_position();
		Register_UnityEngine_Transform_INTERNAL_set_position();

		//System.Void UnityEngine.Transform::INTERNAL_set_rotation(UnityEngine.Quaternion&)
		void Register_UnityEngine_Transform_INTERNAL_set_rotation();
		Register_UnityEngine_Transform_INTERNAL_set_rotation();

		//System.Void UnityEngine.Transform::SetAsFirstSibling()
		void Register_UnityEngine_Transform_SetAsFirstSibling();
		Register_UnityEngine_Transform_SetAsFirstSibling();

		//System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
		void Register_UnityEngine_Transform_SetParent();
		Register_UnityEngine_Transform_SetParent();

		//System.Void UnityEngine.Transform::set_parentInternal(UnityEngine.Transform)
		void Register_UnityEngine_Transform_set_parentInternal();
		Register_UnityEngine_Transform_set_parentInternal();

		//UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
		void Register_UnityEngine_Transform_GetChild();
		Register_UnityEngine_Transform_GetChild();

		//UnityEngine.Transform UnityEngine.Transform::get_parentInternal()
		void Register_UnityEngine_Transform_get_parentInternal();
		Register_UnityEngine_Transform_get_parentInternal();

	//End Registrations for type : UnityEngine.Transform

	//Start Registrations for type : UnityEngine.U2D.SpriteAtlasManager

		//System.Void UnityEngine.U2D.SpriteAtlasManager::Register(UnityEngine.U2D.SpriteAtlas)
		void Register_UnityEngine_U2D_SpriteAtlasManager_Register();
		Register_UnityEngine_U2D_SpriteAtlasManager_Register();

	//End Registrations for type : UnityEngine.U2D.SpriteAtlasManager

	//Start Registrations for type : UnityEngine.UISystemProfilerApi

		//System.Void UnityEngine.UISystemProfilerApi::AddMarker(System.String,UnityEngine.Object)
		void Register_UnityEngine_UISystemProfilerApi_AddMarker();
		Register_UnityEngine_UISystemProfilerApi_AddMarker();

		//System.Void UnityEngine.UISystemProfilerApi::BeginSample(UnityEngine.UISystemProfilerApi/SampleType)
		void Register_UnityEngine_UISystemProfilerApi_BeginSample();
		Register_UnityEngine_UISystemProfilerApi_BeginSample();

		//System.Void UnityEngine.UISystemProfilerApi::EndSample(UnityEngine.UISystemProfilerApi/SampleType)
		void Register_UnityEngine_UISystemProfilerApi_EndSample();
		Register_UnityEngine_UISystemProfilerApi_EndSample();

	//End Registrations for type : UnityEngine.UISystemProfilerApi

	//Start Registrations for type : UnityEngine.UnhandledExceptionHandler

		//System.Void UnityEngine.UnhandledExceptionHandler::NativeUnhandledExceptionHandler(System.String,System.String,System.String)
		void Register_UnityEngine_UnhandledExceptionHandler_NativeUnhandledExceptionHandler();
		Register_UnityEngine_UnhandledExceptionHandler_NativeUnhandledExceptionHandler();

	//End Registrations for type : UnityEngine.UnhandledExceptionHandler

	//Start Registrations for type : UnityEngine.UnityLogWriter

		//System.Void UnityEngine.UnityLogWriter::WriteStringToUnityLogImpl(System.String)
		void Register_UnityEngine_UnityLogWriter_WriteStringToUnityLogImpl();
		Register_UnityEngine_UnityLogWriter_WriteStringToUnityLogImpl();

	//End Registrations for type : UnityEngine.UnityLogWriter

	//Start Registrations for type : UnityEngine.Video.VideoPlayer

		//System.Void UnityEngine.Video.VideoPlayer::INTERNAL_CALL_Play(UnityEngine.Video.VideoPlayer)
		void Register_UnityEngine_Video_VideoPlayer_INTERNAL_CALL_Play();
		Register_UnityEngine_Video_VideoPlayer_INTERNAL_CALL_Play();

		//System.Void UnityEngine.Video.VideoPlayer::set_time(System.Double)
		void Register_UnityEngine_Video_VideoPlayer_set_time();
		Register_UnityEngine_Video_VideoPlayer_set_time();

	//End Registrations for type : UnityEngine.Video.VideoPlayer

	//Start Registrations for type : UnityEngineInternal.Input.NativeInputSystem

		//System.Void UnityEngineInternal.Input.NativeInputSystem::set_hasDeviceDiscoveredCallback(System.Boolean)
		void Register_UnityEngineInternal_Input_NativeInputSystem_set_hasDeviceDiscoveredCallback();
		Register_UnityEngineInternal_Input_NativeInputSystem_set_hasDeviceDiscoveredCallback();

	//End Registrations for type : UnityEngineInternal.Input.NativeInputSystem

}
