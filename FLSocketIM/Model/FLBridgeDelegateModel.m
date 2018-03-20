//
//  FLBridgeDelegateModel.m
//  FLSocketIM
//
//  Created by FMD on 2017/7/12.
//  Copyright © 2017年 FMD. All rights reserved.
//

#import "FLBridgeDelegateModel.h"

@implementation FLBridgeDelegateModel

- (instancetype)initWithDelegate:(id)delegate {
    if (self = [super init]) {
        
        self.delegate = delegate;
    }
    return self;
}

@end
