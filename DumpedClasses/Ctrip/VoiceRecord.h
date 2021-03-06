//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVAudioPlayerDelegate.h"
#import "AVAudioRecorderDelegate.h"
#import "UIAlertViewDelegate.h"

@class AVAudioRecorder, AVPlayer, CTAudioLoadingView, NSString, NSTimer, UIView;

@interface VoiceRecord : NSObject <UIAlertViewDelegate, AVAudioRecorderDelegate, AVAudioPlayerDelegate>
{
    _Bool _voiceIsOK;
    _Bool _isUpload;
    float _countNum;
    NSString *_audioPath;
    CDUnknownBlockType _pathBlock;
    CDUnknownBlockType _voiceBlock;
    AVAudioRecorder *_audioRecorder;
    NSTimer *_timer;
    AVPlayer *_player;
    UIView *_fromView;
    CTAudioLoadingView *_loadingView;
}

+ (id)shareAudioRecord;
@property(retain, nonatomic) CTAudioLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIView *fromView; // @synthesize fromView=_fromView;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(nonatomic) _Bool isUpload; // @synthesize isUpload=_isUpload;
@property(nonatomic) _Bool voiceIsOK; // @synthesize voiceIsOK=_voiceIsOK;
@property(nonatomic) float countNum; // @synthesize countNum=_countNum;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) AVAudioRecorder *audioRecorder; // @synthesize audioRecorder=_audioRecorder;
@property(copy, nonatomic) CDUnknownBlockType voiceBlock; // @synthesize voiceBlock=_voiceBlock;
@property(copy, nonatomic) CDUnknownBlockType pathBlock; // @synthesize pathBlock=_pathBlock;
@property(retain, nonatomic) NSString *audioPath; // @synthesize audioPath=_audioPath;
- (void).cxx_destruct;
- (void)uploadAudioWithPath:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)playerIsEndTime;
- (void)sensorStateChange:(id)arg1;
- (void)openMonitoringEnabled:(_Bool)arg1;
- (void)stopRecordPlayer;
- (void)playRecord:(id)arg1;
- (void)getRecordVoicePower:(CDUnknownBlockType)arg1;
- (void)showLoadingViewType:(long long)arg1;
- (void)levelTimerCallback:(id)arg1;
- (void)changeRecordTime:(id)arg1;
- (_Bool)canRecord;
- (void)stopRecordSuccess:(_Bool)arg1;
- (void)cancelRecord;
- (void)stopRecord;
- (void)onStatrRecordFormView:(id)arg1 needUpload:(_Bool)arg2 pathBlock:(CDUnknownBlockType)arg3;
- (void)initRecordSession;
- (void)audioRecorderDidFinishRecording:(id)arg1 successfully:(_Bool)arg2;
- (void)stopRecordingOnAudioRecorder:(id)arg1;
- (id)audioRecordingSettings;
- (id)audioRecordingPath;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

