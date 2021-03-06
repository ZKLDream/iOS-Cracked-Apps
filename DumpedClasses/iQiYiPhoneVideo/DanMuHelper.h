//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface DanMuHelper : NSObject
{
    id _logQueue;
    long long _freeTotal;
}

+ (id)subTextString:(id)arg1 saveUTF8len:(long long)arg2;
+ (long long)getCurrentTimes;
+ (_Bool)isPictureDanmuInfo:(id)arg1;
+ (int)convertStringToCharForCount:(id)arg1;
+ (id)danMuContentWithFace:(id)arg1;
+ (id)danMuContentWithoutEmotion:(id)arg1;
+ (id)danMuContentEmotionKey:(id)arg1;
+ (id)getEmotionImage:(id)arg1;
+ (id)getEmotionName:(id)arg1;
+ (id)colorForString:(id)arg1;
+ (struct CGSize)sizeWithText:(id)arg1 font:(id)arg2;
+ (id)getShareInstance;
@property(nonatomic) long long freeTotal; // @synthesize freeTotal=_freeTotal;
@property(retain, nonatomic) id logQueue; // @synthesize logQueue=_logQueue;
- (void).cxx_destruct;
- (void)resetDanMuSettingConfiguration;
- (void)freeDiskSpaceInBytes;
- (void)writeLogForDanMu:(id)arg1 withCallType:(unsigned long long)arg2 andUpdateTime:(long long)arg3 isAddReleaseLog:(_Bool)arg4;
@property(retain, nonatomic) id emotionSwitch;
@property(retain, nonatomic) NSString *postion;
@property(retain, nonatomic) NSString *font;
@property(retain, nonatomic) NSString *color;
- (void)dealloc;

@end

