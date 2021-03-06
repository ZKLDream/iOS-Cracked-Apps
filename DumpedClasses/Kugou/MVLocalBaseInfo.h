//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KugouObject.h"

@class NSNumber, NSString;

@interface MVLocalBaseInfo : KugouObject
{
    _Bool _isShort;
    NSNumber *_videoId;
    NSString *_imageUrl;
    NSString *_singerName;
    NSString *_fileName;
    NSString *_hashKey;
    NSString *_publishtTime;
    NSString *_mvDescription;
    double _mediaDuration;
    unsigned long long _highestQuality;
    NSString *_selectQualityMVHash;
    long long _selectQualityMVFileSize;
    long long _selectQualityMVBitRate;
    NSString *_mvSDHash;
    long long _mvSDFileSize;
    long long _mvSDBitRate;
    NSString *_mvHDHash;
    long long _mvHDFileSize;
    long long _mvHDBitRate;
    NSString *_mvSQHash;
    long long _mvSQFileSize;
    long long _mvSQBitRate;
    NSString *_mvBDHash;
    long long _mvBDFileSize;
    long long _mvBDBitRate;
    unsigned long long _mvID;
}

+ (id)getSingerTitleWithMV:(id)arg1;
+ (id)currentMVInfoDictionary:(id)arg1 withMVList:(id)arg2;
@property(nonatomic) _Bool isShort; // @synthesize isShort=_isShort;
@property(nonatomic) unsigned long long mvID; // @synthesize mvID=_mvID;
@property(nonatomic) long long mvBDBitRate; // @synthesize mvBDBitRate=_mvBDBitRate;
@property(nonatomic) long long mvBDFileSize; // @synthesize mvBDFileSize=_mvBDFileSize;
@property(copy, nonatomic) NSString *mvBDHash; // @synthesize mvBDHash=_mvBDHash;
@property(nonatomic) long long mvSQBitRate; // @synthesize mvSQBitRate=_mvSQBitRate;
@property(nonatomic) long long mvSQFileSize; // @synthesize mvSQFileSize=_mvSQFileSize;
@property(copy, nonatomic) NSString *mvSQHash; // @synthesize mvSQHash=_mvSQHash;
@property(nonatomic) long long mvHDBitRate; // @synthesize mvHDBitRate=_mvHDBitRate;
@property(nonatomic) long long mvHDFileSize; // @synthesize mvHDFileSize=_mvHDFileSize;
@property(copy, nonatomic) NSString *mvHDHash; // @synthesize mvHDHash=_mvHDHash;
@property(nonatomic) long long mvSDBitRate; // @synthesize mvSDBitRate=_mvSDBitRate;
@property(nonatomic) long long mvSDFileSize; // @synthesize mvSDFileSize=_mvSDFileSize;
@property(copy, nonatomic) NSString *mvSDHash; // @synthesize mvSDHash=_mvSDHash;
@property(nonatomic) long long selectQualityMVBitRate; // @synthesize selectQualityMVBitRate=_selectQualityMVBitRate;
@property(nonatomic) long long selectQualityMVFileSize; // @synthesize selectQualityMVFileSize=_selectQualityMVFileSize;
@property(copy, nonatomic) NSString *selectQualityMVHash; // @synthesize selectQualityMVHash=_selectQualityMVHash;
@property(nonatomic) unsigned long long highestQuality; // @synthesize highestQuality=_highestQuality;
@property(nonatomic) double mediaDuration; // @synthesize mediaDuration=_mediaDuration;
@property(copy, nonatomic) NSString *mvDescription; // @synthesize mvDescription=_mvDescription;
@property(copy, nonatomic) NSString *publishtTime; // @synthesize publishtTime=_publishtTime;
@property(copy, nonatomic) NSString *hashKey; // @synthesize hashKey=_hashKey;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(copy, nonatomic) NSString *singerName; // @synthesize singerName=_singerName;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) NSNumber *videoId; // @synthesize videoId=_videoId;
- (void).cxx_destruct;
- (_Bool)isFullModel;
- (void)copyFromMVInfo:(id)arg1;
- (id)changeIntoMVList;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)copyFromResultSet:(id)arg1;
- (void)setSelectedMVInfoBySelectedQualityType:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)pathSource;
- (void)setPathSource:(id)arg1;

@end

