//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSSet;

@interface AutoPbModel : NSObject
{
    NSSet *_outPropertyList;
    NSMutableArray *_inPropertyList;
}

@property(retain, nonatomic) NSMutableArray *inPropertyList; // @synthesize inPropertyList=_inPropertyList;
@property(retain, nonatomic) NSSet *outPropertyList; // @synthesize outPropertyList=_outPropertyList;
- (void).cxx_destruct;
- (_Bool)isPbHasProperty:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)setStreamOutPList:(id)arg1;
- (_Bool)streamOutBuffer:(basic_string_075b6133 *)arg1;
- (_Bool)streamInBuffer:(const void *)arg1 len:(int)arg2;
- (_Bool)streamOut:(void *)arg1;
- (_Bool)streamIn:(void *)arg1;
- (_Bool)streamFunc:(void *)arg1 isIn:(_Bool)arg2;
- (id)getPropertyInfos;

@end

