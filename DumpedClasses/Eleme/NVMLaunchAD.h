//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMModel.h"

#import "NSCoding.h"

@class NSNumber, NSString;

@interface NVMLaunchAD : NVMModel <NSCoding>
{
    _Bool _isAD;
    NSNumber *_adID;
    NSString *_fileHash;
    NSNumber *_duration;
    NSString *_linkURL;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) _Bool isAD; // @synthesize isAD=_isAD;
@property(copy, nonatomic) NSString *linkURL; // @synthesize linkURL=_linkURL;
@property(retain, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *fileHash; // @synthesize fileHash=_fileHash;
@property(retain, nonatomic) NSNumber *adID; // @synthesize adID=_adID;
- (void).cxx_destruct;
- (_Bool)containVideoHash;
- (_Bool)containImageHash;
@property(readonly, copy, nonatomic) NSString *videoHash;
@property(readonly, copy, nonatomic) NSString *imageHash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

