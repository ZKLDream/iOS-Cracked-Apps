//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMModel.h"

#import "NVMPiecewiseAgentFeeDelegate.h"

@class NSArray, NSString;

@interface ESPPiecewiseAgentFee : NVMModel <NVMPiecewiseAgentFeeDelegate>
{
    _Bool _hasMultiRules;
    NSArray *_rules;
    NSString *_descriptionText;
    NSString *_tips;
}

+ (id)JSONTransformerForKey:(id)arg1;
+ (id)JSONKeyPathsByPropertyKey;
@property(readonly, nonatomic) _Bool hasMultiRules; // @synthesize hasMultiRules=_hasMultiRules;
@property(copy, nonatomic) NSString *tips; // @synthesize tips=_tips;
@property(copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(copy, nonatomic) NSArray *rules; // @synthesize rules=_rules;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

