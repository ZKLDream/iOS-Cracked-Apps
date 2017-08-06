//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, SBBCardConf;

@interface SBBCardMissionHandler : NSObject
{
    _Bool _clearAllFlag;
    SBBCardConf *_upMission;
    SBBCardConf *_downMission;
    SBBCardConf *_deleteMission;
    SBBCardConf *_lastMission;
    NSMutableDictionary *_posDict;
}

@property(nonatomic) _Bool clearAllFlag; // @synthesize clearAllFlag=_clearAllFlag;
@property(retain, nonatomic) NSMutableDictionary *posDict; // @synthesize posDict=_posDict;
@property(retain, nonatomic) SBBCardConf *lastMission; // @synthesize lastMission=_lastMission;
@property(retain, nonatomic) SBBCardConf *deleteMission; // @synthesize deleteMission=_deleteMission;
@property(retain, nonatomic) SBBCardConf *downMission; // @synthesize downMission=_downMission;
@property(retain, nonatomic) SBBCardConf *upMission; // @synthesize upMission=_upMission;
- (void).cxx_destruct;
- (id)imageByConfigure:(id)arg1;
- (_Bool)hasUnfinishedMission;
- (id)fetchLastMission;
- (_Bool)hasLastDeleteMission;
- (void)clearAllMission;
- (_Bool)hasClearAllMission;
- (void)resetClearAllMssion;
- (void)addClearAllMission;
- (void)clearMissionByCardConfig:(id)arg1;
- (void)addCardMissionDirectlyByConfigure:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (_Bool)downloadImageByURLString:(id)arg1 imgDownloadedOnce:(CDUnknownBlockType)arg2;
- (void)addCardMissionByConfigure:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)addDeleteMissionByConfigure:(id)arg1;
- (void)updateCardMissionByConfiure:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (id)init;

@end
