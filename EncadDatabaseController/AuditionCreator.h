//
//  AuditionCreator.h
//  EncadDatabaseController
//
//  Created by Bernd Fecht (encad-consulting.de) on 08.01.15.
//  Copyright (c) 2015 Bernd Fecht (encad-consulting.de). All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Auditions.h"
#import "Schulungstermin.h"

@interface AuditionCreator : UIViewController<UIPickerViewDataSource, UIPickerViewDelegate,UITextFieldDelegate>

@property (nonatomic, weak) Auditions *auditionsController;

@property (nonatomic, strong) Schulungstermin *audition;

@end
