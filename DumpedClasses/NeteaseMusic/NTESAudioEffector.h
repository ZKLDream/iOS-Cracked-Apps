//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NTESAudioEffector : NSObject
{
    long long _errorCode;
    _Bool _enabled;
}

+ (struct AudioStreamBasicDescription)requiredFormat;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
- (void)processWithInput:(const void *)arg1 output:(void *)arg2 sampleNumber:(unsigned int)arg3;
- (void)resetWhenSeeking;
- (void)resetWhenSwitching;
- (_Bool)prepareToProcess;
- (id)init;

@end
