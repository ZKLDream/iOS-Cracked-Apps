//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray;

@interface KGWebsocketSwitchServer : NSObject <NSCopying>
{
    int _type;
    NSArray *_serverDataArrays;
}

@property(retain, nonatomic) NSArray *serverDataArrays; // @synthesize serverDataArrays=_serverDataArrays;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithServerMessageDictionary:(id)arg1;

@end
