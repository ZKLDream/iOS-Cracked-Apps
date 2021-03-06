//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMRewardToplistObject.h"

@class NSString;

@interface NMRewardToplistSong : NMRewardToplistObject
{
    NSString *_songId;
    NSString *_name;
    NSString *_albumName;
    NSString *_albumImageURL;
    NSString *_artistId;
    NSString *_artistName;
}

@property(readonly, copy, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(readonly, copy, nonatomic) NSString *artistId; // @synthesize artistId=_artistId;
@property(readonly, copy, nonatomic) NSString *albumImageURL; // @synthesize albumImageURL=_albumImageURL;
@property(readonly, copy, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *songId; // @synthesize songId=_songId;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)toRewardResource;

@end

